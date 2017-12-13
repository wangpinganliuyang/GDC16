/**
\addtogroup GDC16 GDC16
@{
*/

/**
\file GDC16.c
\brief Implementation

\version 1.0.0.11
*/


/*-----------------------------------------------------------------------------------------
------
------    Includes
------
-----------------------------------------------------------------------------------------*/
#include "ecat_def.h"

#include "applInterface.h"
#include "mcihwf2837xd.h"
#include "cia402appl.h"
#include "coeappl.h"
#include "GDCV05_cpu2ram.h"

#include "F2837xD_Ipc_drivers.h"

#include "ecatappl.h"

#define _GDC16_ 1
#include "GDC16.h"
#undef _GDC16_
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

/*-----------------------------------------------------------------------------------------
------
------    generic functions
------
-----------------------------------------------------------------------------------------*/
GDC_R  GDCV05_CPU2_R;
GDC_WR GDCV05_CPU2_WR;


//#pragma DATA_SECTION(GDCV05_CPU2_R,"SHARERAMGS15");
//#pragma DATA_SECTION(GDCV05_CPU2_WR,"SHARERAMGS14");

/////////////////////////////////////////////////////////////////////////////////////////
/**

 \brief    This is the main function

*////////////////////////////////////////////////////////////////////////////////////////
void main(void)
{
    /* initialize the Hardware and the EtherCAT Slave Controller */

	UINT16 u16PdiCtrl = 0;

	f2837xd_Init();

    do
    {
//           HW_EscReadWord(u16PdiCtrl,ESC_PDI_CONTROL_OFFSET);
   	   u16PdiCtrl = ESC_readWordNonISR(ESC_PDI_CONTROL_OFFSET);
          //考虑延迟
     } while ((u16PdiCtrl & 0xFF) != 0x8 );

    MainInit();

    /*Initialize Axes structures*/
    CiA402_Init();

    /*Create basic mapping*/
    APPL_GenerateMapping(&nPdInputSize,&nPdOutputSize);

    bRunApplication = TRUE;
    do
    {
        MainLoop();
        
    } while (bRunApplication == TRUE);

    CiA402_DeallocateAxis();
}
/*-----------------------------------------------------------------------------------------
------
------    generic functions
------
-----------------------------------------------------------------------------------------*/
/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief    The function is called when an error state was acknowledged by the master

*////////////////////////////////////////////////////////////////////////////////////////

void    APPL_AckErrorInd(UINT16 stateTrans)
{

}

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \return    AL Status Code (see ecatslv.h ALSTATUSCODE_....)

 \brief    The function is called in the state transition from INIT to PREOP when
           all general settings were checked to start the mailbox handler. This function
           informs the application about the state transition, the application can refuse
           the state transition when returning an AL Status error code.
           The return code NOERROR_INWORK can be used, if the application cannot confirm
           the state transition immediately, in that case the application need to be complete
           the transition by calling ECAT_StateChange.

*////////////////////////////////////////////////////////////////////////////////////////

UINT16 APPL_StartMailboxHandler(void)
{
    return ALSTATUSCODE_NOERROR;
}

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \return     0, NOERROR_INWORK

 \brief    The function is called in the state transition from PREEOP to INIT
           to stop the mailbox handler. This functions informs the application
           about the state transition, the application cannot refuse
           the state transition.

*////////////////////////////////////////////////////////////////////////////////////////

UINT16 APPL_StopMailboxHandler(void)
{
    return ALSTATUSCODE_NOERROR;
}


/////////////////////////////////////////////////////////////////////////////////////////
/**
 \return     0, NOERROR_INWORK

 \brief    The function is called in the state transition from SAFEOP to PREEOP
             to stop the input handler. This functions informs the application
             about the state transition, the application cannot refuse
             the state transition.

*////////////////////////////////////////////////////////////////////////////////////////

UINT16 APPL_StopInputHandler(void)
{
    return ALSTATUSCODE_NOERROR;
}

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \return    AL Status Code (see ecatslv.h ALSTATUSCODE_....)

 \brief    The function is called in the state transition from SAFEOP to OP when
             all general settings were checked to start the output handler. This function
             informs the application about the state transition, the application can refuse
             the state transition when returning an AL Status error code.
           The return code NOERROR_INWORK can be used, if the application cannot confirm
           the state transition immediately, in that case the application need to be complete
           the transition by calling ECAT_StateChange.
*////////////////////////////////////////////////////////////////////////////////////////

UINT16 APPL_StartOutputHandler(void)
{
    return ALSTATUSCODE_NOERROR;
}

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \return     0, NOERROR_INWORK

 \brief    The function is called in the state transition from OP to SAFEOP
             to stop the output handler. This functions informs the application
             about the state transition, the application cannot refuse
             the state transition.

*////////////////////////////////////////////////////////////////////////////////////////

UINT16 APPL_StopOutputHandler(void)
{
    return ALSTATUSCODE_NOERROR;
}


/////////////////////////////////////////////////////////////////////////////////////////
/**
\brief    This function will called from the synchronisation ISR
            or from the mainloop if no synchronisation is supported
*////////////////////////////////////////////////////////////////////////////////////////
void APPL_Application(void)
{

        if(LocalAxes.bAxisIsActive)
            CiA402_Application(&LocalAxes);

}

/////////////////////////////////////////////////////////////////////////////////////////
/**
\param      pData  pointer to output process data

\brief    This function will copies the outputs from the ESC memory to the local memory
            to the hardware
*////////////////////////////////////////////////////////////////////////////////////////
//根据不同Master--slaver 传输的数据进行修改
void APPL_OutputMapping(UINT16* pData)
{

	switch ((sRxPDOassign.aEntries[0] & 0x000F))
    {
        case 0:    //csp/csv RxPDO    entries
            {
            TCiA402PDO1600 *pOutputs = (TCiA402PDO1600 *)pData;

            LocalAxes.Objects.objControlWord = SWAPWORD(pOutputs->ObjControlWord);
            LocalAxes.Objects.objTargetPosition = SWAPDWORD(pOutputs->ObjTargetPosition);
            LocalAxes.Objects.objTargetVelocity    = SWAPDWORD(pOutputs->ObjTargetVelocity);
            LocalAxes.Objects.objTargetTorque = pOutputs->ObjTargetTorque;
            LocalAxes.Objects.objModesOfOperation = SWAPWORD((pOutputs->ObjModesOfOperation & 0x00FF));
            }
            break;
        case 1:    //csp RxPDO    entries
            {
            TCiA402PDO1601 *pOutputs = (TCiA402PDO1601 *)pData;

            LocalAxes.Objects.objControlWord = SWAPWORD(pOutputs->ObjControlWord);
            LocalAxes.Objects.objTargetPosition = SWAPDWORD(pOutputs->ObjTargetPosition);

            }
            break;
        case 2:    //csv RxPDO    entries
            {
            TCiA402PDO1602 *pOutputs = (TCiA402PDO1602 *)pData;

            LocalAxes.Objects.objControlWord = SWAPWORD(pOutputs->ObjControlWord);
            LocalAxes.Objects.objTargetVelocity    = SWAPDWORD(pOutputs->ObjTargetVelocity);

            }
            break;
        case 3:    //cst RxPDO    entries
            {
            TCiA402PDO1603 *pOutputs = (TCiA402PDO1603 *)pData;

            LocalAxes.Objects.objControlWord = SWAPWORD(pOutputs->ObjControlWord);
            LocalAxes.Objects.objTargetTorque    = SWAPDWORD(pOutputs->ObjTargetTorque);

            }
            break;
      }

}

void Output_GDCmapping(void)
{
	if(IPCRtoLFlagBusy(IPC_FLAG10) == 1)
	{
		GDCV05_CPU2_WR.ControlWord.all = LocalAxes.Objects.objControlWord;
		GDCV05_CPU2_WR.ModesOfOperation = LocalAxes.Objects.objModesOfOperation;
		if(LocalAxes.Objects.objModesOfOperation == 8)
		{
			GDCV05_CPU2_WR.SetTarget = LocalAxes.Objects.objTargetPosition;
		}
		else if(LocalAxes.Objects.objModesOfOperation == 9)
		{
			GDCV05_CPU2_WR.SetTarget = LocalAxes.Objects.objTargetVelocity;
		}
		else
		{
			GDCV05_CPU2_WR.SetTarget = LocalAxes.Objects.objTargetPosition;
		}

		IPCRtoLFlagAcknowledge (IPC_FLAG10);
	}

}

//COE 邮箱通信，读GDC参数
void Shared_Ram_cpu2_WR_Upload(UINT32 index)
{
	index = index | 0x10000000;
	if(IPCRtoLFlagBusy(IPC_FLAG10) == 1)
	{
		GDCV05_CPU2_WR.GDCIndex = index;
		IPCRtoLFlagAcknowledge (IPC_FLAG10);
	}
}

//COE 邮箱通信，读GDC参数
void Shared_Ram_cpu2_WR_Download(UINT32 index,UINT32 *pData)
{
	index = index | 0x20000000;
	if(IPCRtoLFlagBusy(IPC_FLAG10) == 1)
	{
		GDCV05_CPU2_WR.GDCIndex = index;
		GDCV05_CPU2_WR.GDCIndexValue = pData[0];
		IPCRtoLFlagAcknowledge (IPC_FLAG10);
	}
}


/////////////////////////////////////////////////////////////////////////////////////////
/**
\param      pData  pointer to input process data
\brief      This function will copies the inputs from the local memory to the ESC memory
            to the hardware
*////////////////////////////////////////////////////////////////////////////////////////
void APPL_InputMapping(UINT16* pData)
{
        switch ((sTxPDOassign.aEntries[0]& 0x000F))
        {
        case 0:    //copy csp/csv TxPDO entries
            {
                TCiA402PDO1A00 *pInputs = (TCiA402PDO1A00 *)pData;

                pInputs->ObjStatusWord = SWAPWORD(LocalAxes.Objects.objStatusWord);
                pInputs->ObjPositionActualValue = SWAPDWORD(LocalAxes.Objects.objPositionActualValue);
                pInputs->ObjVelocityActualValue = SWAPDWORD(LocalAxes.Objects.objVelocityActualValue);
                pInputs->ObjTorqueActualValue = LocalAxes.Objects.objTorqueActualValue;
                pInputs->ObjModesOfOperationDisplay = SWAPWORD((LocalAxes.Objects.objModesOfOperationDisplay & 0x00FF));


            }
            break;
        case 1://copy csp TxPDO entries
            {
                TCiA402PDO1A01 *pInputs = (TCiA402PDO1A01 *)pData;

                pInputs->ObjStatusWord = SWAPWORD(LocalAxes.Objects.objStatusWord);
                pInputs->ObjPositionActualValue = SWAPDWORD(LocalAxes.Objects.objPositionActualValue);


            }
            break;
        case 2://copy csv TxPDO entries
            {
                TCiA402PDO1A02 *pInputs = (TCiA402PDO1A02 *)pData;

                pInputs->ObjStatusWord = SWAPWORD(LocalAxes.Objects.objStatusWord);
                pInputs->ObjPositionActualValue = SWAPDWORD(LocalAxes.Objects.objPositionActualValue);
                pInputs->ObjVelocityActualValue = LocalAxes.Objects.objVelocityActualValue;


            }
            break;
        case 3://copy cst TxPDO entries
            {
                TCiA402PDO1A03 *pInputs = (TCiA402PDO1A03 *)pData;

                pInputs->ObjStatusWord = SWAPWORD(LocalAxes.Objects.objStatusWord);
                pInputs->ObjPositionActualValue = SWAPDWORD(LocalAxes.Objects.objPositionActualValue);
                pInputs->ObjTorqueActualValue = LocalAxes.Objects.objTorqueActualValue;


            }
            break;
        }    //switch TXPDO entry

}

//从GDC参数到输出
void Input_GDCmapping(void)
{
	LocalAxes.Objects.objStatusWord =GDCV05_CPU2_R.StatusWord.all ;
	LocalAxes.Objects.objPositionActualValue = GDCV05_CPU2_R.PositionActualValue;
	LocalAxes.Objects.objVelocityActualValue = GDCV05_CPU2_R.VelocityActualValue;
	LocalAxes.Objects.objModesOfOperationDisplay = GDCV05_CPU2_R.ModesOfOperationDisplay;
}

/////////////////////////////////////////////////////////////////////////////////////////
/**
\return     0(ALSTATUSCODE_NOERROR), NOERROR_INWORK
\param      pInputSize  pointer to save the input process data length
\param      pOutputSize  pointer to save the output process data length

\brief    This function calculates the process data sizes from the actual SM-PDO-Assign
            and PDO mapping
*////////////////////////////////////////////////////////////////////////////////////////
UINT16 APPL_GenerateMapping(UINT16 *pInputSize,UINT16 *pOutputSize)
{
    UINT16 result = ALSTATUSCODE_NOERROR;
    UINT16 u16cnt = 0;
    UINT16 InputSize = 0;
    UINT16 OutputSize = 0;
    TOBJECT OBJMEM *pDiCEntry = NULL;

            if(!LocalAxes.bAxisIsActive)
            {
                /*add objects to dictionary*/
                pDiCEntry = LocalAxes.ObjDic;

                while(pDiCEntry->Index != 0xFFFF)
                {
                    result = COE_AddObjectToDic(pDiCEntry);

                    if(result != 0)
                    {
                        return result;
                    }

                    pDiCEntry++;    //get next entry
                }


                LocalAxes.bAxisIsActive = TRUE;
            }





    /*Scan object 0x1C12 RXPDO assign*/

        switch ((sRxPDOassign.aEntries[0] & 0x000F))    //mask Axis type (supported modes)
        {
            case 0:
                /*drive mode supported    csv(cyclic sync velocity) : bit 8
                 * cst(cyclic sync t) : bit 9
                                        csp (cyclic sync position) : bit 7*/
                LocalAxes.Objects.objSupportedDriveModes = 0x380;
                for(u16cnt =0 ; u16cnt < LocalAxes.Objects.sRxPDOMap0.u16SubIndex0;u16cnt++)
                {
                    OutputSize +=(UINT16)(LocalAxes.Objects.sRxPDOMap0.aEntries[u16cnt] & 0xFF);
                }
                break;
            case 1:
                /*drive mode supported    csp (cyclic sync position) : bit 7*/
                LocalAxes.Objects.objSupportedDriveModes = 0x80;
                for(u16cnt =0 ; u16cnt < LocalAxes.Objects.sRxPDOMap1.u16SubIndex0;u16cnt++)
                {
                    OutputSize +=(UINT16)(LocalAxes.Objects.sRxPDOMap1.aEntries[u16cnt] & 0xFF);
                }
                break;
            case 2:
                    /*drive mode supported    csv(cyclic sync velocity) : bit 8*/
                LocalAxes.Objects.objSupportedDriveModes= 0x100;
                for(u16cnt =0 ; u16cnt < LocalAxes.Objects.sRxPDOMap2.u16SubIndex0;u16cnt++)
                {
                    OutputSize += (UINT16)(LocalAxes.Objects.sRxPDOMap2.aEntries[u16cnt] & 0xFF);;
                }
                break;
            case 3:
                    /*drive mode supported    cst(cyclic sync torque) : bit 9*/
                LocalAxes.Objects.objSupportedDriveModes= 0x200;
                for(u16cnt =0 ; u16cnt < LocalAxes.Objects.sRxPDOMap3.u16SubIndex0;u16cnt++)
                {
                    OutputSize += (UINT16)(LocalAxes.Objects.sRxPDOMap3.aEntries[u16cnt] & 0xFF);;
                }
                break;
        }


    OutputSize = OutputSize >> 3;

    if(result == 0)
    {
        /*Scan Object 0x1C13 TXPDO assign*/

            switch ((sTxPDOassign.aEntries[0] & 0x000F))    //mask Axis type (supported modes)
            {
            case 0: /*csp/csv*/
                for(u16cnt =0 ; u16cnt < LocalAxes.Objects.sTxPDOMap0.u16SubIndex0;u16cnt++)
                {
                    InputSize +=(UINT16)(LocalAxes.Objects.sTxPDOMap0.aEntries[u16cnt] & 0xFF);
                }
                break;
            case 1: /*csp*/
                for(u16cnt =0 ; u16cnt < LocalAxes.Objects.sTxPDOMap1.u16SubIndex0;u16cnt++)
                {
                    InputSize +=(UINT16)(LocalAxes.Objects.sTxPDOMap1.aEntries[u16cnt] & 0xFF);
                }
                break;
            case 2: /*csv*/
                for(u16cnt =0 ; u16cnt < LocalAxes.Objects.sTxPDOMap2.u16SubIndex0;u16cnt++)
                {
                    InputSize +=(UINT16)(LocalAxes.Objects.sTxPDOMap2.aEntries[u16cnt] & 0xFF);
                }
                break;
            case 3: /*cst*/
                for(u16cnt =0 ; u16cnt < LocalAxes.Objects.sTxPDOMap3.u16SubIndex0;u16cnt++)
                {
                    InputSize +=(UINT16)(LocalAxes.Objects.sTxPDOMap3.aEntries[u16cnt] & 0xFF);
                }
                break;
            }


        InputSize = InputSize >> 3;
    }

    *pInputSize = InputSize;
    *pOutputSize = OutputSize;
    return result;
}

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \param    pIntMask    pointer to the AL Event Mask which will be written to the AL event Mask
                        register (0x204) when this function is succeeded. The event mask can be adapted
                        in this function
 \return    AL Status Code (see ecatslv.h ALSTATUSCODE_....)

 \brief    The function is called in the state transition from PREOP to SAFEOP when
             all general settings were checked to start the input handler. This function
             informs the application about the state transition, the application can refuse
             the state transition when returning an AL Status error code.
            The return code NOERROR_INWORK can be used, if the application cannot confirm
            the state transition immediately, in that case the application need to be complete
            the transition by calling ECAT_StateChange.
*////////////////////////////////////////////////////////////////////////////////////////

UINT16 APPL_StartInputHandler(UINT16 *pIntMask)
{
    UINT32 Sync0CycleTime = 0;
    UINT16 Sync0CycleTime0 = 0;
    UINT16 Sync0CycleTime1 = 0;
//    HW_EscReadDWord(Sync0CycleTime, ESC_DC_SYNC0_CYCLETIME_OFFSET);
    Sync0CycleTime0 = ESC_readWordNonISR(ESC_DC_SYNC0_CYCLETIME_OFFSET);
    Sync0CycleTime1 = ESC_readWordNonISR((ESC_DC_SYNC0_CYCLETIME_OFFSET+2));
    Sync0CycleTime = (((UINT32)(Sync0CycleTime1))<<16) + Sync0CycleTime0;

    /*Init CiA402 structure if the device is in SM Sync mode
    the CiA402 structure will be Initialized after calculation of the Cycle time*/
    if(bDcSyncActive == TRUE)
    {
        Sync0CycleTime = Sync0CycleTime / 1000; //get cycle time in us

            if(LocalAxes.bAxisIsActive)
                LocalAxes.u32CycleTime = Sync0CycleTime;

    }
/*ET9300 Project Handler :(#if DIAGNOSIS_SUPPORTED) lines 1037 to 1043 deleted*/

    return ALSTATUSCODE_NOERROR;
}


//将GDC参数加入对象字典中
//UINT16 GDC_ObjDictionaryInit(void)
//{
//    result = AddObjectsToObjDictionary((TOBJECT OBJMEM *) GDCV005ObjDic);
//
//}



/** @} */


