/**
\addtogroup CiA402appl CiA402 Sample Application
@{
*/

/**
\file cia402appl.c
\author EthercatSSC@beckhoff.com
\brief Implementation
This file contains all ciA402 specific functions

\version 5.11

<br>Changes to version V5.10:<br>
V5.11 ECAT11: create application interface function pointer, add eeprom emulation interface functions<br>
<br>Changes to version V5.01:<br>
V5.10 CIA402 1: Update complete access handling for 0xF030<br>
V5.10 ECAT6: Add "USE_DEFAULT_MAIN" to enable or disable the main function<br>
<br>Changes to version V5.0:<br>
V5.01 ESC2: Add missed value swapping<br>
<br>Changes to version V4.40:<br>
V5.0 CIA402 1: Syntax bugfix in dummy motion controller<br>
V5.0 CIA402 2: Handle 0xF030/0xF050 in correlation do PDO assign/mapping objects<br>
V5.0 CIA402 3: Trigger dummy motion controller if valid mode of operation is set.<br>
V5.0 CIA402 4: Change Axes structure handling and resources allocation.<br>
V5.0 ECAT2: Create generic application interface functions. Documentation in Application Note ET9300.<br>
<br>Changes to version V4.30:<br>
V4.40 CoE 6: add AL Status code to Init functions<br>
V4.40 CIA402 2: set motion control trigger depending on "Synchronisation", "mode of operation" and "cycle time"<br>
V4.40 CIA402 1: change behaviour and name of bit12 of the status word (0x6041) (WG CIA402 24.02.2010)<br>
V4.30 : create file (state machine; handling state transition options; input feedback)
*/

/*-----------------------------------------------------------------------------------------
------
------    Includes
------
-----------------------------------------------------------------------------------------*/
#include "ecat_def.h"


/* ECATCHANGE_START(V5.11) ECAT11*/
#include "applInterface.h"
/* ECATCHANGE_END(V5.11) ECAT11*/

#include "coeappl.h"

#define _CiA402_
#include "cia402appl.h"
#undef _CiA402_


/*--------------------------------------------------------------------------------------
------
------    local types and defines
------
--------------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------------------
------
------    local variables and constants
------
-----------------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------------------
------
------    application specific functions
------
-----------------------------------------------------------------------------------------*/

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \return    0               Init CiA402 device successful
            ALSTATUSCODE_XX Init CiA402 device failed

 \brief    This function initializes the Axes structures
*////////////////////////////////////////////////////////////////////////////////////////
UINT16 CiA402_Init(void)
{
    UINT16 result = 0;
     /*Reset Axis buffer*/
    HMEMSET(&LocalAxes,0,SIZEOF(TCiA402Axis));

    LocalAxes.bAxisIsActive = FALSE;
    LocalAxes.bBrakeApplied = TRUE;
    LocalAxes.bLowLevelPowerApplied = TRUE;
    LocalAxes.bHighLevelPowerApplied = FALSE;
    LocalAxes.bAxisFunctionEnabled = FALSE;
    LocalAxes.bConfigurationAllowed = TRUE;

    LocalAxes.i16State = STATE_NOT_READY_TO_SWITCH_ON;
    LocalAxes.u16PendingOptionCode = 0x00;

    LocalAxes.fCurPosition = 0;
    LocalAxes.u32CycleTime = 0;


    /***********************************
        init objects
    *************************************/

    /*set default values*/
    HMEMCPY(&LocalAxes.Objects,&DefCiA402ObjectValues,CIA402_OBJECTS_SIZE);


    /***********************************
        init objects dictionary entries
    *************************************/
    LocalAxes.ObjDic = (TOBJECT *) ALLOCMEM(SIZEOF(DefCiA402AxisObjDic));
    HMEMCPY(LocalAxes.ObjDic,&DefCiA402AxisObjDic,SIZEOF(DefCiA402AxisObjDic));

    TOBJECT OBJMEM *pDiCEntry = LocalAxes.ObjDic;

    /*adapt Object index and assign Var pointer*/
    while(pDiCEntry->Index != 0xFFFF)
    {

        switch(pDiCEntry->Index)
        {
        case 0x1600:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.sRxPDOMap0;
            break;
        case 0x1601:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.sRxPDOMap1;
            break;
        case 0x1602:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.sRxPDOMap2;
            break;
        case 0x1603:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.sRxPDOMap3;
            break;
        case 0x1A00:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.sTxPDOMap0;
            break;
        case 0x1A01:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.sTxPDOMap1;
            break;
        case 0x1A02:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.sTxPDOMap2;
            break;
        case 0x1A03:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.sTxPDOMap3;
            break;
        case 0x603F:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objErrorCode;
            break;
        case 0x6040:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objControlWord;
            break;
        case 0x6041:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objStatusWord;
            break;
        case 0x6060:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objModesOfOperation;
            break;
        case 0x6061:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objModesOfOperationDisplay;
            break;
        case 0x6063:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objPositionActualInValue;
            break;
        case 0x6064:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objPositionActualValue;
            break;
        case 0x6065:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objFollowingErrorWindow;
            break;
        case 0x606B:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objVelocityDemandValue;
            break;
        case 0x606C:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objVelocityActualValue;
            break;
        case 0x606D:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objVelocityWindow;
            break;
        case 0x606E:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objVelocityWindowTime;
            break;
        case 0x6071:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objTargetTorque;
            break;
        case 0x6072:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objMaxTorque;
            break;
        case 0x6077:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objTorqueActualValue;
            break;
        case 0x607A:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objTargetPosition;
            break;
        case 0x607C:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objHomeOffset;
            break;
        case 0x607D:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objSoftwarePositionLimit;
            break;
        case 0x6081:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objProfileVelocity;
            break;
        case 0x6083:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objProfileAcceleration;
            break;
        case 0x6084:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objProfileDeceleration;
            break;
        case 0x6087:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objTorqueSlope;
            break;
        case 0x6098:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objHomingMethod;
            break;
        case 0x6099:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objHomingSpeeds;
            break;
        case 0x609A:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objHomingAcceleration;
            break;
        case 0x60B1:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objVelocityOffset;
            break;
        case 0x60B2:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objTorqueOffset;
            break;
        case 0x60B8:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objTouchProbeFunction;
            break;
        case 0x60B9:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objTouchProbeStatus;
            break;
        case 0x60BA:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objTouchProbe1Positive;
            break;
        case 0x60BB:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objTouchProbe1Negative;
            break;
        case 0x60BC:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objTouchProbe2Positive;
            break;
        case 0x60BD:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objTouchProbe2Negative;
            break;
        case 0x60C0:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objInterpolationMode;
            break;
        case 0x60C2:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objInterpolationTimePeriod;
            break;
        case 0x60E0:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objPositiveTorqueLimit;
            break;
        case 0x60E1:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objNegativeTorqueLimit;
            break;
        case 0x60F4:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objFollowingErrorActual;
            break;
        case 0x60FC:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objPositionDemandInternal;
            break;
        case 0x60FD:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objDigitalInputs;
            break;
        case 0x60FE:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objDigitalOutputs;
            break;
        case 0x60FF:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objTargetVelocity;
            break;
        case 0x6502:
            pDiCEntry->pVarPtr = &LocalAxes.Objects.objSupportedDriveModes;
            break;
        default :
        break;
        }//switch(pDiCEntry->Index)

        /*increment object index*/


        pDiCEntry++;
    }//while(pDiCEntry->Index != 0xFFFF)




    return result;
}
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief    CiA402_DeallocateAxis
 \brief    Remove all allocated axes resources
*////////////////////////////////////////////////////////////////////////////////////////
void CiA402_DeallocateAxis(void)
{
    /*Remove object dictionary entries*/
    if(LocalAxes.ObjDic != NULL)
    {
        TOBJECT OBJMEM *pEntry = LocalAxes.ObjDic;

        while(pEntry->Index != 0xFFFF)
        {
            COE_RemoveDicEntry(pEntry->Index);

            pEntry++;
        }

        FREEMEM(LocalAxes.ObjDic);
    }

    nPdOutputSize = 0;
    nPdInputSize = 0;


}
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief    CiA402-Statemachine
        This function handles the state machine for devices using the CiA402 profile.
        called cyclic from MainLoop()
        All described transition numbers are referring to the document
        "ETG Implementation Guideline for the CiA402 Axis Profile" located on the EtherCAT.org download section

*////////////////////////////////////////////////////////////////////////////////////////
void CiA402_StateMachine(void)
{
    TCiA402Axis *pCiA402Axis;
    UINT16 StatusWord = 0;
    UINT16 ControlWord6040 = 0;


    pCiA402Axis = &LocalAxes;
    StatusWord = pCiA402Axis->Objects.objStatusWord;
    ControlWord6040 = pCiA402Axis->Objects.objControlWord;

    /*clear statusword state and controlword processed complete bits*/
    StatusWord &= ~(STATUSWORD_STATE_MASK | STATUSWORD_REMOTE);

    /*skip state state transition if the previous transition is pending*/
    if(pCiA402Axis->u16PendingOptionCode!= 0x0)
    {
        return;
    }
    /*skip transition 1 and 2*/
    if(pCiA402Axis->i16State < STATE_READY_TO_SWITCH_ON && nAlStatus == STATE_OP)
        pCiA402Axis->i16State = STATE_READY_TO_SWITCH_ON;

    switch(pCiA402Axis->i16State)
    {
    case STATE_NOT_READY_TO_SWITCH_ON://未准备好接通电源
        StatusWord |= (STATUSWORD_STATE_NOTREADYTOSWITCHON);
        if(nAlStatus == STATE_OP)
        {
            // Automatic transition -> Communication shall be activated
            pCiA402Axis->i16State = STATE_SWITCH_ON_DISABLED; // Transition 1
        }
        else
        {
            /*
            CiA402 statemachine shall stay in "STATE_NOT_READY_TO_SWITCH_ON" if EtherCAT state is not OP.
            */
            pCiA402Axis->i16State = STATE_NOT_READY_TO_SWITCH_ON; // stay in current state
        }

        break;
    case STATE_SWITCH_ON_DISABLED://不可接通电源
        StatusWord |= (STATUSWORD_STATE_SWITCHEDONDISABLED);
        if ((ControlWord6040 & CONTROLWORD_COMMAND_SHUTDOWN_MASK) == CONTROLWORD_COMMAND_SHUTDOWN)
        {
            pCiA402Axis->i16State = STATE_READY_TO_SWITCH_ON;
        }
        break;
    case STATE_READY_TO_SWITCH_ON://准备好接通电源
        StatusWord |= (STATUSWORD_STATE_READYTOSWITCHON);
        if (((ControlWord6040 & CONTROLWORD_COMMAND_QUICKSTOP_MASK) == CONTROLWORD_COMMAND_QUICKSTOP)
            || ((ControlWord6040 & CONTROLWORD_COMMAND_DISABLEVOLTAGE_MASK) == CONTROLWORD_COMMAND_DISABLEVOLTAGE))//disablevoltage
        {
            pCiA402Axis->i16State = STATE_SWITCH_ON_DISABLED;
        }
        else if (((ControlWord6040 & CONTROLWORD_COMMAND_SWITCHON_MASK) == CONTROLWORD_COMMAND_SWITCHON) ||
                ((ControlWord6040 & CONTROLWORD_COMMAND_SWITCHON_ENABLEOPERATION_MASK) == CONTROLWORD_COMMAND_SWITCHON_ENABLEOPERATION))//enableoperation
            {
                pCiA402Axis->i16State = STATE_SWITCHED_ON;
            }
        break;
    case STATE_SWITCHED_ON://已开始供电
        StatusWord |= (STATUSWORD_STATE_SWITCHEDON);

        if ((ControlWord6040 & CONTROLWORD_COMMAND_SHUTDOWN_MASK) == CONTROLWORD_COMMAND_SHUTDOWN)
        {
            pCiA402Axis->i16State = STATE_READY_TO_SWITCH_ON;

        }
        else if (((ControlWord6040 & CONTROLWORD_COMMAND_QUICKSTOP_MASK) == CONTROLWORD_COMMAND_QUICKSTOP
                || (ControlWord6040 & CONTROLWORD_COMMAND_DISABLEVOLTAGE_MASK) == CONTROLWORD_COMMAND_DISABLEVOLTAGE))
        {
            pCiA402Axis->i16State = STATE_SWITCH_ON_DISABLED;

        }
        else if ((ControlWord6040 & CONTROLWORD_COMMAND_ENABLEOPERATION_MASK) == CONTROLWORD_COMMAND_ENABLEOPERATION)
        {
            pCiA402Axis->i16State = STATE_OPERATION_ENABLED;
            //The Axis function shall be enabled and all internal set-points cleared.
        }
        break;
    case STATE_OPERATION_ENABLED://可操作
        StatusWord |= (STATUSWORD_STATE_OPERATIONENABLED);

        if ((ControlWord6040 & CONTROLWORD_COMMAND_DISABLEOPERATION_MASK) == CONTROLWORD_COMMAND_DISABLEOPERATION)
        {
           pCiA402Axis->i16State = STATE_SWITCHED_ON;
        }
        else if ((ControlWord6040 & CONTROLWORD_COMMAND_QUICKSTOP_MASK) == CONTROLWORD_COMMAND_QUICKSTOP)
        {
           pCiA402Axis->i16State = STATE_QUICK_STOP_ACTIVE;
        }
        else if ((ControlWord6040 & CONTROLWORD_COMMAND_SHUTDOWN_MASK) == CONTROLWORD_COMMAND_SHUTDOWN)
        {
           pCiA402Axis->i16State = STATE_READY_TO_SWITCH_ON;
        }
        else if ((ControlWord6040 & CONTROLWORD_COMMAND_DISABLEVOLTAGE_MASK) == CONTROLWORD_COMMAND_DISABLEVOLTAGE)
        {
           pCiA402Axis->i16State = STATE_SWITCH_ON_DISABLED;
        }
        break;
    case STATE_QUICK_STOP_ACTIVE://急停状态
        StatusWord |= STATUSWORD_STATE_QUICKSTOPACTIVE;
        if ((ControlWord6040 & CONTROLWORD_COMMAND_DISABLEVOLTAGE_MASK) == CONTROLWORD_COMMAND_DISABLEVOLTAGE)
        {
            pCiA402Axis->i16State = STATE_SWITCH_ON_DISABLED;
        }
        /*NOTE: it is not recommend to support transition 16 */
        break;
    case STATE_FAULT_REACTION_ACTIVE://出错反应
        StatusWord |= (STATUSWORD_STATE_FAULTREACTIONACTIVE);
        // Automatic transition
        pCiA402Axis->i16State = STATE_FAULT;// Transition 14
        break;
    case STATE_FAULT://出错
        StatusWord |= (STATUSWORD_STATE_FAULT);
        if ((ControlWord6040 & CONTROLWORD_COMMAND_FAULTRESET_MASK) == CONTROLWORD_COMMAND_FAULTRESET)
        {
            pCiA402Axis->i16State = STATE_SWITCH_ON_DISABLED;// Transition 15
        }
        break;

    default:    //the sate variable is set to in invalid value => rest Axis
        StatusWord = (STATUSWORD_STATE_NOTREADYTOSWITCHON);
        pCiA402Axis->i16State = STATE_NOT_READY_TO_SWITCH_ON;
        break;

    }// switch(current state)

    /*Update operational functions (the low level power supply is always TRUE*/
    switch(pCiA402Axis->i16State)
    {
    case STATE_NOT_READY_TO_SWITCH_ON://为准备好接通电源
    case STATE_SWITCH_ON_DISABLED://不可接通电源
    case STATE_READY_TO_SWITCH_ON://准备好接通电源
        pCiA402Axis->bBrakeApplied = TRUE;
        pCiA402Axis->bHighLevelPowerApplied =  FALSE;
        pCiA402Axis->bAxisFunctionEnabled = FALSE;
        pCiA402Axis->bConfigurationAllowed = TRUE;
        break;
    case STATE_SWITCHED_ON://已开始供电
        pCiA402Axis->bBrakeApplied = TRUE;
        pCiA402Axis->bHighLevelPowerApplied =  TRUE;
        pCiA402Axis->bAxisFunctionEnabled = FALSE;
        pCiA402Axis->bConfigurationAllowed = TRUE;
        break;
    case STATE_OPERATION_ENABLED://可操作
    case STATE_QUICK_STOP_ACTIVE://急停状态
    case STATE_FAULT_REACTION_ACTIVE://出错反应
        pCiA402Axis->bBrakeApplied = TRUE;
        pCiA402Axis->bHighLevelPowerApplied =  TRUE;
        pCiA402Axis->bAxisFunctionEnabled = TRUE;
        pCiA402Axis->bConfigurationAllowed = FALSE;
        break;
    case STATE_FAULT://出错
        pCiA402Axis->bBrakeApplied = TRUE;
        pCiA402Axis->bHighLevelPowerApplied =  FALSE;
        pCiA402Axis->bAxisFunctionEnabled = FALSE;
        pCiA402Axis->bConfigurationAllowed = TRUE;
        break;
    default:
        pCiA402Axis->bBrakeApplied = TRUE;
        pCiA402Axis->bHighLevelPowerApplied =  FALSE;
        pCiA402Axis->bAxisFunctionEnabled = FALSE;
        pCiA402Axis->bConfigurationAllowed = TRUE;
        break;
    }
    if( pCiA402Axis->bHighLevelPowerApplied == TRUE)
        StatusWord |= STATUSWORD_VOLTAGE_ENABLED;
    else
        StatusWord &= ~STATUSWORD_VOLTAGE_ENABLED;
    /*state transition finished set controlword complete bit and update status object 0x6041*/
    pCiA402Axis->Objects.objStatusWord = (StatusWord | STATUSWORD_REMOTE);

}

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \param ErrorCode

 \brief    CiA402_LocalError
 \brief this function is called if an error was detected
*////////////////////////////////////////////////////////////////////////////////////////
void CiA402_LocalError(UINT16 ErrorCode)
{
        if(LocalAxes.bAxisIsActive)
        {
            LocalAxes.i16State = STATE_FAULT_REACTION_ACTIVE;
            LocalAxes.Objects.objErrorCode = ErrorCode;
        }

}

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief    CiA402_DummyMotionControl
 \brief this functions provides an simple feedback functionality
*////////////////////////////////////////////////////////////////////////////////////////
void CiA402_DummyMotionControl(TCiA402Axis *pCiA402Axis)
{
    float IncFactor    = (float)0.0010922 * (float) pCiA402Axis->u32CycleTime;

    INT32 i32TargetVelocity = 0;

    /*Motion Controller shall only be triggered if application is trigger by DC Sync Signals,
    and a valid mode of operation is set*/

    /*calculate actual position */
    pCiA402Axis->fCurPosition += ((double)pCiA402Axis->Objects.objVelocityActualValue) * IncFactor;
    pCiA402Axis->Objects.objPositionActualValue = (INT32)(pCiA402Axis->fCurPosition);


    if(pCiA402Axis->bAxisFunctionEnabled &&
    pCiA402Axis->bLowLevelPowerApplied &&
    pCiA402Axis->bHighLevelPowerApplied &&
    !pCiA402Axis->bBrakeApplied)
    {
        if((pCiA402Axis->Objects.objSoftwarePositionLimit.i32MaxLimit> pCiA402Axis->Objects.objPositionActualValue
            || pCiA402Axis->Objects.objPositionActualValue > pCiA402Axis->Objects.objTargetPosition) &&
            (pCiA402Axis->Objects.objSoftwarePositionLimit.i32MinLimit < pCiA402Axis->Objects.objPositionActualValue
            || pCiA402Axis->Objects.objPositionActualValue < pCiA402Axis->Objects.objTargetPosition))
        {
            pCiA402Axis->Objects.objStatusWord &= ~STATUSWORD_INTERNAL_LIMIT;

            switch(pCiA402Axis->Objects.objModesOfOperationDisplay)
            {
            case CYCLIC_SYNC_POSITION_MODE:
                if(IncFactor != 0)
                    i32TargetVelocity = (pCiA402Axis->Objects.objTargetPosition - pCiA402Axis->Objects.objPositionActualValue) / ((long)IncFactor);
                else
                    i32TargetVelocity = 0;
                break;
            case CYCLIC_SYNC_VELOCITY_MODE:
                if(pCiA402Axis->i16State == STATE_OPERATION_ENABLED)
                    i32TargetVelocity = pCiA402Axis->Objects.objTargetVelocity;
                else
                        i32TargetVelocity = 0;
                break;
            default:
                break;
            }
        }
        else
        {
            pCiA402Axis->Objects.objStatusWord |= STATUSWORD_INTERNAL_LIMIT;
        }
    }
    pCiA402Axis->Objects.objVelocityActualValue= i32TargetVelocity;

    /*Accept new mode of operation*/
    pCiA402Axis->Objects.objModesOfOperationDisplay = pCiA402Axis->Objects.objModesOfOperation;

}

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief    CiA402-Application
 \brief check if a state transition is pending and pass desired ramp-code to CiA402TransitionAction()
 \brief if this functions returns true the state transition is finished.
*////////////////////////////////////////////////////////////////////////////////////////
void CiA402_Application(TCiA402Axis *pCiA402Axis)
{
    /*clear "Drive follows the command value" flag if the target values from the master overwritten by the local application*/
    if(pCiA402Axis->u16PendingOptionCode != 0 &&
        (pCiA402Axis->Objects.objModesOfOperationDisplay == CYCLIC_SYNC_POSITION_MODE ||
        pCiA402Axis->Objects.objModesOfOperationDisplay == CYCLIC_SYNC_VELOCITY_MODE))
    {
        pCiA402Axis->Objects.objStatusWord &= ~ STATUSWORD_DRIVE_FOLLOWS_COMMAND;//drive follows command
    }
    else
        pCiA402Axis->Objects.objStatusWord |= STATUSWORD_DRIVE_FOLLOWS_COMMAND;


    if(bDcSyncActive
        && (pCiA402Axis->u32CycleTime != 0)
        && ((pCiA402Axis->Objects.objSupportedDriveModes >> (pCiA402Axis->Objects.objModesOfOperation - 1)) & 0x1)) //Mode of Operation (0x6060) - 1 specifies the Bit within Supported Drive Modes (0x6502)
    {
        CiA402_DummyMotionControl(pCiA402Axis);
    }
}




#if EXPLICIT_DEVICE_ID
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \return    The Explicit Device ID of the EtherCAT slave

 \brief     Calculate the Explicit Device ID
*////////////////////////////////////////////////////////////////////////////////////////
UINT16 APPL_GetDeviceID()
{

    /* Explicit Device 5 is expected by Explicit Device ID conformance tests*/
    return 0x5;
}
#endif



/** @} */

