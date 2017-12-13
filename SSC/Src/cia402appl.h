/**
 * \addtogroup CiA402appl CiA402 Sample Application
 * @{
 */

/**
\file cia402appl.h
\author EthercatSSC@beckhoff.com
\brief CiA402 specific defines; objects; Axes structure

\version 5.11

<br>Changes to version V5.01:<br>
V5.11 CiA402 1: "append padding byte to ""csv/csp"" process data (basic process data has odd word length), add pack directive"<br>
V5.11 COE1: update invalid end entry in the object dictionaries (error with some compilers)<br>
<br>Changes to version - :<br>
V5.01 : Start file change log
 */
#ifndef _CIA402_H_
#define _CIA402_H_

/*-----------------------------------------------------------------------------------------
------
------    Includes
------
-----------------------------------------------------------------------------------------*/
#include "objdef.h"


/*-----------------------------------------------------------------------------------------
------
------    Defines and Types
------
-----------------------------------------------------------------------------------------*/
/*---------------------------------------------
-    ControlWord Commands Mask (IEC61800_184e)
-----------------------------------------------*/
#define CONTROLWORD_COMMAND_SHUTDOWN_MASK                    0x0087 /**< \brief Shutdown command mask*/
#define CONTROLWORD_COMMAND_SWITCHON_MASK                    0x00C7 /**< \brief Switch on command mask*/
#define CONTROLWORD_COMMAND_SWITCHON_ENABLEOPERATION_MASK    0x008F /**< \brief Switch on & Enable command mask*/
#define CONTROLWORD_COMMAND_DISABLEVOLTAGE_MASK              0x0082 /**< \brief Disable voltage command mask*/
#define CONTROLWORD_COMMAND_QUICKSTOP_MASK                   0x0086 /**< \brief Quickstop command mask*/
#define CONTROLWORD_COMMAND_DISABLEOPERATION_MASK            0x008F /**< \brief Disable operation command mask*/
#define CONTROLWORD_COMMAND_ENABLEOPERATION_MASK             0x008F /**< \brief Enable operation command mask*/
#define CONTROLWORD_COMMAND_FAULTRESET_MASK                  0x0080 /**< \brief Fault reset command mask*/


/*---------------------------------------------
-    ControlWord Commands (IEC61800_184e)
-----------------------------------------------*/
#define CONTROLWORD_COMMAND_SHUTDOWN                         0x0006 /**< \brief Shutdown command*/
#define CONTROLWORD_COMMAND_SWITCHON                         0x0007 /**< \brief Switch on command*/
#define CONTROLWORD_COMMAND_SWITCHON_ENABLEOPERATION         0x000F /**< \brief Switch on & Enable command*/
#define CONTROLWORD_COMMAND_DISABLEVOLTAGE                   0x0000 /**< \brief Disable voltage command*/
#define CONTROLWORD_COMMAND_QUICKSTOP                        0x0002 /**< \brief Quickstop command*/
#define CONTROLWORD_COMMAND_DISABLEOPERATION                 0x0007 /**< \brief Disable operation command*/
#define CONTROLWORD_COMMAND_ENABLEOPERATION                  0x000F /**< \brief Enable operation command*/
#define CONTROLWORD_COMMAND_FAULTRESET                       0x0080 /**< \brief Fault reset command*/


/*---------------------------------------------
-    StatusWord Masks and Flags
-----------------------------------------------*/
#define STATUSWORD_STATE_MASK                                0x006F /**< \brief State mask*/
#define STATUSWORD_VOLTAGE_ENABLED                           0x0010 /**< \brief Indicate high voltage enabled*/
#define STATUSWORD_WARNING                                   0x0080 /**< \brief Warning active*/
#define STATUSWORD_MANUFACTORSPECIFIC                        0x0100 /**< \brief Manufacturer specific*/
#define STATUSWORD_INTERNAL_LIMIT                            0x0800 /**< \brief Internal limit*/
#define STATUSWORD_REMOTE                                    0x0200 /**< \brief Set if the control word is processed*/
#define STATUSWORD_TARGET_REACHED                            0x0400 /**< \brief Target reached*/
#define STATUSWORD_INTERNALLIMITACTIVE                       0x0800 /**< \brief Internal limit active*/
#define STATUSWORD_DRIVE_FOLLOWS_COMMAND                     0x1000 /**< \brief Drive follows command (used in cyclic synchronous modes)*/


/*---------------------------------------------
-    StatusWord
-----------------------------------------------*/
#define STATUSWORD_STATE_NOTREADYTOSWITCHON                  0x0000 /**< \brief Not ready to switch on*/
#define STATUSWORD_STATE_SWITCHEDONDISABLED                  0x0020 /**< \brief Switched on but disabled*/
#define STATUSWORD_STATE_READYTOSWITCHON                     0x0021 /**< \brief Ready to switch on*/
#define STATUSWORD_STATE_SWITCHEDON                          0x0023 /**< \brief Switched on*/
#define STATUSWORD_STATE_OPERATIONENABLED                    0x0027 /**< \brief Operation enabled*/
#define STATUSWORD_STATE_QUICKSTOPACTIVE                     0x0007 /**< \brief Quickstop active*/
#define STATUSWORD_STATE_FAULTREACTIONACTIVE                 0x000F /**< \brief Fault reaction active*/
#define STATUSWORD_STATE_FAULT                               0x0008 /**< \brief Fault state*/


/*---------------------------------------------
-    CiA402 State machine
-----------------------------------------------*/
#define STATE_NOT_READY_TO_SWITCH_ON        0x0001 /**< \brief Not ready to switch on (optional)*/
#define STATE_SWITCH_ON_DISABLED            0x0002 /**< \brief Switch on but disabled (optional)*/
#define STATE_READY_TO_SWITCH_ON            0x0004 /**< \brief Ready to switch on (mandatory)*/
#define STATE_SWITCHED_ON                   0x0008 /**< \brief Switch on (mandatory)*/
#define STATE_OPERATION_ENABLED             0x0010 /**< \brief Operation enabled (mandatory)*/
#define STATE_QUICK_STOP_ACTIVE             0x0020 /**< \brief Quick stop active (optional)*/
#define STATE_FAULT_REACTION_ACTIVE         0x0040 /**< \brief Fault reaction active (mandatory)*/
#define STATE_FAULT                         0x0080 /**< \brief Fault state (mandatory)*/


/*---------------------------------------------
-    CiA402 Modes of Operation (object 0x6060) (IEC61800_184e)
-----------------------------------------------*/
// -128 to -1 Manufacturer-specific operation modes
#define NO_MODE                     0 /**< \brief No mode*/
#define PROFILE_POSITION_MODE       1 /**< \brief Position Profile mode*/
#define VELOCITY_MODE               2 /**< \brief Velocity mode*/
#define PROFILE_VELOCITY_MOCE       3 /**< \brief Velocity Profile mode*/
#define PROFILE_TORQUE_MODE         4 /**< \brief Torque Profile mode*/
//5 reserved                          
#define HOMING_MODE                 6 /**< \brief Homing mode*/
#define INTERPOLATION_POSITION_MODE 7 /**< \brief Interpolation Position mode*/
#define CYCLIC_SYNC_POSITION_MODE   8 /**< \brief Cyclic Synchronous Position mode*/
#define CYCLIC_SYNC_VELOCITY_MODE   9 /**< \brief Cyclic Synchronous Velocity mode*/
#define CYCLIC_SYNC_TORQUE_MODE     10/**< \brief Cyclic Synchronous Torque mode*/
//+11 to +127 reserved


/***************************************
 CiA402 Error Codes (object 0x603F) (IEC61800_184e)
 ***************************************/
#define ERROR_SHORT_CIRCUIT_EARTH_LEAKAGE_INPUT             0x2110 /**< \brief Short circuit/earth leakage (input)*/
#define ERROR_EARTH_LEAKAGE_INPUT                           0x2120 /**< \brief Earth leakage (input)*/
#define ERROR_EARTH_LEAKAGE_PHASE_L1                        0x2121 /**< \brief Earth leakage phase L1*/
#define ERROR_EARTH_LEAKAGE_PHASE_L2                        0x2122 /**< \brief Earth leakage phase L2*/
#define ERROR_EARTH_LEAKAGE_PHASE_L3                        0x2123 /**< \brief Earth leakage phase L3*/
#define ERROR_SHORT_CIRCUIT_INPUT                           0x2130 /**< \brief Short circuit (input)*/
#define ERROR_SHORT_CIRCUIT_PHASES_L1_L2                    0x2131 /**< \brief Short circuit phases L1-L2*/
#define ERROR_SHORT_CIRCUIT_PHASES_L2_L3                    0x2132 /**< \brief Short circuit phases L2-L3*/
#define ERROR_SHORT_CIRCUIT_PHASES_L3_L1                    0x2133 /**< \brief Short circuit phases L3-L1*/
#define ERROR_INTERNAL_CURRENT_NO1                          0x2211 /**< \brief Internal current no 1*/
#define ERROR_INTERNAL_CURRENT_NO2                          0x2212 /**< \brief Internal current no 2*/
#define ERROR_OVER_CURRENT_IN_RAMP_FUNCTION                 0x2213 /**< \brief Over-current in ramp function*/
#define ERROR_OVER_CURRENT_IN_THE_SEQUENCE                  0x2214 /**< \brief Over-current in the sequence*/
#define ERROR_CONTINUOUS_OVER_CURRENT_DEVICE_INTERNAL       0x2220 /**< \brief Continuous over current (device internal)*/
#define ERROR_CONTINUOUS_OVER_CURRENT_DEVICE_INTERNAL_NO1   0x2221 /**< \brief Continuous over current no 1*/
#define ERROR_CONTINUOUS_OVER_CURRENT_DEVICE_INTERNAL_NO2   0x2222 /**< \brief Continuous over current no 2*/
#define ERROR_SHORT_CIRCUIT_EARTH_LEAKAGE_DEVICE_INTERNAL   0x2230 /**< \brief Short circuit/earth leakage (device internal)*/
#define ERROR_EARTH_LEAKAGE_DEVICE_INTERNAL                 0x2240 /**< \brief Earth leakage (device internal)*/
#define ERROR_SHORT_CIRCUIT_DEVICE_INTERNAL                 0x2250 /**< \brief Short circuit (device internal)*/
#define ERROR_CONTINUOUS_OVER_CURRENT                       0x2310 /**< \brief Continuous over current*/
#define ERROR_CONTINUOUS_OVER_CURRENT_NO1                   0x2311 /**< \brief Continuous over current no 1*/
#define ERROR_CONTINUOUS_OVER_CURRENT_NO2                   0x2312 /**< \brief Continuous over current no 2*/
#define ERROR_SHORT_CIRCUIT_EARTH_LEAKAGE_MOTOR_SIDE        0x2320 /**< \brief Short circuit/earth leakage (motor-side)*/
#define ERROR_EARTH_LEAKAGE_MOTOR_SIDE                      0x2330 /**< \brief Earth leakage (motor-side)*/
#define ERROR_EARTH_LEAKAGE_PHASE_U                         0x2331 /**< \brief Earth leakage phase U*/
#define ERROR_EARTH_LEAKAGE_PHASE_V                         0x2332 /**< \brief Earth leakage phase V*/
#define ERROR_EARTH_LEAKAGE_PHASE_W                         0x2333 /**< \brief Earth leakage phase W*/
#define ERROR_SHORT_CIRCUIT_MOTOR_SIDE                      0x2340 /**< \brief Short circuit (motor-side)*/
#define ERROR_SHORT_CIRCUIT_PHASES_U_V                      0x2341 /**< \brief Short circuit phases U-V*/
#define ERROR_EARTH_LEAKAGE_PHASE_V_W                       0x2342 /**< \brief Earth leakage phase V-W*/
#define ERROR_EARTH_LEAKAGE_PHASE_W_U                       0x2343 /**< \brief Earth leakage phase W-U*/
#define ERROR_LOAD_LEVEL_FAULT_I2T_THERMAL_STATE            0x2350 /**< \brief Load level fault (I2t, thermal state)*/
#define ERROR_LOAD_LEVEL_WARNING_I2T_THERMAL_STATE          0x2351 /**< \brief Load level warning (I2t, thermal state)*/
#define ERROR_MAINS_OVER_VOLTAGE                            0x3110 /**< \brief Mains over-voltage*/
#define ERROR_MAINS_OVER_VOLTAGE_PHASE_L1                   0x3111 /**< \brief Mains over-voltage phase L1*/
#define ERROR_MAINS_OVER_VOLTAGE_PHASE_L2                   0x3112 /**< \brief Mains over-voltage phase L2 */
#define ERROR_MAINS_OVER_VOLTAGE_PHASE_L3                   0x3113 /**< \brief Mains over-voltage phase L3*/
#define ERROR_MAINS_UNDER_VOLTAGE                           0x3120 /**< \brief Mains under-voltage*/
#define ERROR_MAINS_UNDER_VOLTAGE_PHASE_L1                  0x3121 /**< \brief Mains under-voltage phase L1*/
#define ERROR_MAINS_UNDER_VOLTAGE_PHASE_L2                  0x3122 /**< \brief Mains under-voltage phase L2*/
#define ERROR_MAINS_UNDER_VOLTAGE_PHASE_L3                  0x3123 /**< \brief Mains under-voltage phase L3*/
#define ERROR_PHASE_FAILURE                                 0x3130 /**< \brief Phase failure*/
#define ERROR_PHASE_FAILURE_L1                              0x3131 /**< \brief Phase failure L1*/
#define ERROR_PHASE_FAILURE_L2                              0x3132 /**< \brief Phase failure L2*/
#define ERROR_PHASE_FAILURE_L3                              0x3133 /**< \brief Phase failure L3*/
#define ERROR_PHASE_SEQUENCE                                0x3134 /**< \brief Phase sequence*/
#define ERROR_MAINS_FREQUENCY                               0x3140 /**< \brief Mains frequency*/
#define ERROR_MAINS_FREQUENCY_TOO_GREAT                     0x3141 /**< \brief Mains frequency too great*/
#define ERROR_MAINS_FREQUENCY_TOO_SMALL                     0x3142 /**< \brief Mains frequency too small*/
#define ERROR_DC_LINK_OVER_VOLTAGE                          0x3210 /**< \brief DC link over-voltage*/
#define ERROR_OVER_VOLTAGE_NO_1                             0x3211 /**< \brief Over-voltage no  1*/
#define ERROR_OVER_VOLTAGE_NO_2                             0x3212 /**< \brief Over voltage no  2 */
#define ERROR_DC_LINK_UNDER_VOLTAGE                         0x3220 /**< \brief DC link under-voltage*/
#define ERROR_UNDER_VOLTAGE_NO_1                            0x3221 /**< \brief Under-voltage no  1*/
#define ERROR_UNDER_VOLTAGE_NO_2                            0x3222 /**< \brief Under-voltage no  2*/
#define ERROR_LOAD_ERROR                                    0x3230 /**< \brief Load error*/
#define ERROR_OUTPUT_OVER_VOLTAGE                           0x3310 /**< \brief Output over-voltage*/
#define ERROR_OUTPUT_OVER_VOLTAGE_PHASE_U                   0x3311 /**< \brief Output over-voltage phase U*/
#define ERROR_OUTPUT_OVER_VOLTAGE_PHASE_V                   0x3312 /**< \brief Output over-voltage phase V*/
#define ERROR_OUTPUT_OVER_VOLTAGE_PHASE_W                   0x3313 /**< \brief Output over-voltage phase W*/
#define ERROR_ARMATURE_CIRCUIT                              0x3320 /**< \brief Armature circuit*/
#define ERROR_ARMATURE_CIRCUIT_INTERRUPTED                  0x3321 /**< \brief Armature circuit interrupted*/
#define ERROR_FIELD_CIRCUIT                                 0x3330 /**< \brief Field circuit error */
#define ERROR_FIELD_CIRCUIT_INTERRUPTED                     0x3331 /**< \brief Field circuit interrupted*/
#define ERROR_EXCESS_AMBIENT_TEMPERATURE                    0x4110 /**< \brief Excess ambient temperature*/
#define ERROR_TOO_LOW_AMBIENT_TEMPERATURE                   0x4120 /**< \brief Too low ambient temperature*/
#define ERROR_TEMPERATURE_SUPPLY_AIR                        0x4130 /**< \brief Temperature supply air*/
#define ERROR_TEMPERATURE_AIR_OUTLET                        0x4140 /**< \brief Temperature air outlet*/
#define ERROR_EXCESS_TEMPERATURE_DEVICE                     0x4210 /**< \brief Excess temperature device*/
#define ERROR_TOO_LOW_TEMPERATURE_DEVICE                    0x4220 /**< \brief Too low temperature device*/
#define ERROR_TEMPERATURE_DRIVE                             0x4300 /**< \brief Temperature drive error*/
#define ERROR_EXCESS_TEMPERATURE_DRIVE                      0x4310 /**< \brief Excess temperature drive error*/
#define ERROR_TOO_LOW_TEMPERATURE_DRIVE                     0x4320 /**< \brief Too low temperature drive error*/
#define ERROR_TEMPERATURE_SUPPLY                            0x4400 /**< \brief Temperature supply error*/
#define ERROR_EXCESS_TEMPERATURE_SUPPLY                     0x4410 /**< \brief Excess temperature supply*/
#define ERROR_TOO_LOW_TEMPERATURE_SUPPLY                    0x4420 /**< \brief Too low temperature supply*/
#define ERROR_SUPPLY_ERROR                                  0x5100 /**< \brief Supply error*/
#define ERROR_SUPPLY_LOW_VOLTAGE                            0x5110 /**< \brief Supply low voltage*/
#define ERROR_U1_SUPPLY_15V                                 0x5111 /**< \brief U1 = supply +15V/-15V*/
#define ERROR_U2_SUPPLY_24_V                                0x5112 /**< \brief U2 = supply +24 V*/
#define ERROR_U3_SUPPLY_5_V                                 0x5113 /**< \brief U3 = supply +5 V*/
#define ERROR_U4_MANUFACTURER_SPECIFIC                      0x5114 /**< \brief U4 = manufacturer-specific error*/
#define ERROR_U5_MANUFACTURER_SPECIFIC                      0x5115 /**< \brief U5 = manufacturer-specific error*/
#define ERROR_U6_MANUFACTURER_SPECIFIC                      0x5116 /**< \brief U6 = manufacturer-specific error*/
#define ERROR_U7_MANUFACTURER_SPECIFIC                      0x5117 /**< \brief U7 = manufacturer-specific error*/
#define ERROR_U8_MANUFACTURER_SPECIFIC                      0x5118 /**< \brief U8 = manufacturer-specific error*/
#define ERROR_U9_MANUFACTURER_SPECIFIC                      0x5119 /**< \brief U9 = manufacturer-specific error*/
#define ERROR_SUPPLY_INTERMEDIATE_CIRCUIT                   0x5120 /**< \brief Supply intermediate circuit*/
//#define ERROR_CONTROL                                     0x5200
#define ERROR_CONTROL_MEASUREMENT_CIRCUIT                   0x5210 /**< \brief Measurement circuit*/
#define ERROR_CONTROL_COMPUTING_CIRCUIT                     0x5220 /**< \brief Computing circuit*/
#define ERROR_OPERATING_UNIT                                0x5300 /**< \brief Operating unit error*/
#define ERROR_POWER_SECTION                                 0x5400 /**< \brief Power section error*/
#define ERROR_OUTPUT_STAGES                                 0x5410 /**< \brief Output stages error*/
#define ERROR_CHOPPER                                       0x5420 /**< \brief Chopper error*/
#define ERROR_INPUT_STAGES                                  0x5430 /**< \brief Input stages error*/
#define ERROR_CONTACTS_ERROR                                0x5440 /**< \brief Contacts error*/
#define ERROR_CONTACT_1_MANUFACTURER_SPECIFIC               0x5441 /**< \brief Contact 1 = manufacturer-specific error*/
#define ERROR_CONTACT_2_MANUFACTURER_SPECIFIC               0x5442 /**< \brief Contact 2 = manufacturer-specific error*/
#define ERROR_CONTACT_3_MANUFACTURER_SPECIFIC               0x5443 /**< \brief Contact 3 = manufacturer-specific error*/
#define ERROR_CONTACT_4_MANUFACTURER_SPECIFIC               0x5444 /**< \brief Contact 4 = manufacturer-specific error*/
#define ERROR_CONTACT_5_MANUFACTURER_SPECIFIC               0x5445 /**< \brief Contact 5 = manufacturer-specific error*/
#define ERROR_FUSES_ERROR                                   0x5450 /**< \brief Fuses error*/
#define ERROR_S1_L1                                         0x5451 /**< \brief S1 = l1 error*/
#define ERROR_S2_L2                                         0x5452 /**< \brief S2 = l2 error*/
#define ERROR_S3_L3                                         0x5453 /**< \brief S3 = l3 error*/
#define ERROR_S4_MANUFACTURER_SPECIFIC                      0x5454 /**< \brief S4 = manufacturer-specific error*/
#define ERROR_S5_MANUFACTURER_SPECIFIC                      0x5455 /**< \brief S5 = manufacturer-specific error*/
#define ERROR_S6_MANUFACTURER_SPECIFIC                      0x5456 /**< \brief S6 = manufacturer-specific error*/
#define ERROR_S7_MANUFACTURER_SPECIFIC                      0x5457 /**< \brief S7 = manufacturer-specific error*/
#define ERROR_S8_MANUFACTURER_SPECIFIC                      0x5458 /**< \brief S8 = manufacturer-specific error*/
#define ERROR_S9_MANUFACTURER_SPECIFIC                      0x5459 /**< \brief S9 = manufacturer-specific error*/
#define ERROR_HARDWARE_MEMORY                               0x5500 /**< \brief Hardware memory error*/
#define ERROR_RAM                                           0x5510 /**< \brief RAM error*/
#define ERROR_ROM_EPROM                                     0x5520 /**< \brief ROM/EPROM error*/
#define ERROR_EEPROM                                        0x5530 /**< \brief EEPROM error*/
#define ERROR_SOFTWARE_RESET_WATCHDOG                       0x6010 /**< \brief Software reset (watchdog)*/
//0x6301_TO_0x630F        ERROR_DATA_RECORD_NO_1_TO_NO_15          
#define ERROR_LOSS_OF_PARAMETERS                            0x6310 /**< \brief Loss of parameters*/
#define ERROR_PARAMETER_ERROR                               0x6320 /**< \brief Parameter error*/
#define ERROR_POWER_ERROR                                   0x7100 /**< \brief Power error*/
#define ERROR_BRAKE_CHOPPER                                 0x7110 /**< \brief Brake chopper*/
#define ERROR_FAILURE_BRAKE_CHOPPER                         0x7111 /**< \brief Failure brake chopper*/
#define ERROR_OVER_CURRENT_BRAKE_CHOPPER                    0x7112 /**< \brief Over current brake chopper*/
#define ERROR_PROTECTIVE_CIRCUIT_BRAKE_CHOPPER              0x7113 /**< \brief Protective circuit brake chopper error*/
#define ERROR_MOTOR_ERROR                                   0x7120 /**< \brief Motor error*/
#define ERROR_MOTOR_BLOCKED                                 0x7121 /**< \brief Motor blocked error*/
#define ERROR_MOTOR_ERROR_OR_COMMUTATION_MALFUNC            0x7122 /**< \brief Motor error or commutation malfunc */
#define ERROR_MOTOR_TILTED                                  0x7123 /**< \brief Motor tilted*/
#define ERROR_MEASUREMENT_CIRCUIT                           0x7200 /**< \brief Measurement circuit*/
#define ERROR_SENSOR_ERROR                                  0x7300 /**< \brief Sensor error*/
#define ERROR_TACHO_FAULT                                   0x7301 /**< \brief Tacho fault*/
#define ERROR_TACHO_WRONG_POLARITY                          0x7302 /**< \brief Tacho wrong polarity*/
#define ERROR_RESOLVER_1_FAULT                              0x7303 /**< \brief Resolver 1 fault*/
#define ERROR_RESOLVER_2_FAULT                              0x7304 /**< \brief Resolver 2 fault*/
#define ERROR_INCREMENTAL_SENSOR_1_FAULT                    0x7305 /**< \brief Incremental sensor 1 fault*/
#define ERROR_INCREMENTAL_SENSOR_2_FAULT                    0x7306 /**< \brief Incremental sensor 2 fault*/
#define ERROR_INCREMENTAL_SENSOR_3_FAULT                    0x7307 /**< \brief Incremental sensor 3 fault*/
#define ERROR_SPEED                                         0x7310 /**< \brief Speed error*/
#define ERROR_POSITION                                      0x7320 /**< \brief Position error*/
#define ERROR_COMPUTATION_CIRCUIT                           0x7400 /**< \brief Computation circuit*/
#define ERROR_COMMUNICATION                                 0x7500 /**< \brief Communication error*/
#define ERROR_SERIAL_INTERFACE_NO_1                         0x7510 /**< \brief Serial interface no  1 error*/
#define ERROR_SERIAL_INTERFACE_NO_2                         0x7520 /**< \brief Serial interface no  2 error*/
#define ERROR_DATA_STORAGE_EXTERNAL                         0x7600 /**< \brief Data storage (external) error*/
#define ERROR_TORQUE_CONTROL                                0x8300 /**< \brief Torque control error*/
#define ERROR_EXCESS_TORQUE                                 0x8311 /**< \brief Excess torque error*/
#define ERROR_DIFFICULT_START_UP                            0x8312 /**< \brief Difficult start up error*/
#define ERROR_STANDSTILL_TORQUE                             0x8313 /**< \brief Standstill torque error*/
#define ERROR_INSUFFICIENT_TORQUE                           0x8321 /**< \brief Insufficient torque error*/
#define ERROR_TORQUE_FAULT                                  0x8331 /**< \brief Torque fault*/
#define ERROR_VELOCITY_SPEED_CONTROLLER                     0x8400 /**< \brief Velocity speed controller*/
#define ERROR_POSITION_CONTROLLER                           0x8500 /**< \brief Position controller*/
#define ERROR_POSITIONING_CONTROLLER                        0x8600 /**< \brief Positioning controller*/
#define ERROR_FOLLOWING_ERROR                               0x8611 /**< \brief Following error*/
#define ERROR_REFERENCE_LIMIT                               0x8612 /**< \brief Reference limit*/
#define ERROR_SYNC_CONTROLLER                               0x8700 /**< \brief Sync controller*/
#define ERROR_WINDING_CONTROLLER                            0x8800 /**< \brief Winding controller*/
#define ERROR_PROCESS_DATA_MONITORING                       0x8900 /**< \brief Process data monitoring*/
//#define ERROR_CONTROL                                     0x8A00
#define ERROR_DECELERATION                                  0xF001 /**< \brief Deceleration error*/
#define ERROR_SUB_SYNCHRONOUS_RUN                           0xF002 /**< \brief Sub-synchronous run error*/
#define ERROR_STROKE_OPERATION                              0xF003 /**< \brief Stroke operation error*/
//#define ERROR_CONTROL                                     0xF004
//0xFF00_TO_0xFFFF        MANUFACTURER_SPECIFIC                   


/*---------------------------------------------
-    CiA402 generic error option code values
        Note: Not all values are valid for each error option code.
        A detailed description of the option code values are listed in the specification IEC 61800-7-200
        0x605B    : action in state transition 8
        0x605C    : action in state transition 5
-----------------------------------------------*/
#define DISABLE_DRIVE                    0 /**< \brief Disable drive (options: 0x605B; 0x605C; 0x605E)*/
#define SLOW_DOWN_RAMP                   1 /**< \brief Slow down ramp (options: 0x605B; 0x605C; 0x605E)*/
#define QUICKSTOP_RAMP                   2 /**< \brief Quick stop ramp (options: 0x605E)*/
#define STOP_ON_CURRENT_LIMIT            3 /**< \brief Stop on current limit (options: 0x605E)*/
#define STOP_ON_VOLTAGE_LIMIT            4 /**< \brief Stop on voltage limit (options: 0x605E)*/


/*---------------------------------------------
-    Specific values for Quick stop option code (object 0x605A) (IEC61800_184e)
        indicated the quick stop function
-----------------------------------------------*/
//-32768 to -1        MANUFACTURER_SPECIFIC
#define SLOWDOWN_RAMP_NO_TRANSIT                5 /**< \brief Slow down on slow down ramp and stay in Quick Stop Active*/
#define QUICKSTOP_RAMP_NO_TRANSIT               6 /**< \brief Slow down on quick stop ramp and stay in Quick Stop Active*/
#define CURRENT_LIMIT_NO_TRANSIT                7 /**< \brief Slow down on current limit and stay in Quick Stop Active*/
#define VOLTAGE_LIMIT_NO_TRANSIT                8 /**< \brief Slow down on voltage limit and stay in Quick Stop Active*/
//9 to 32767        RESERVED


#define MAX_AXES    1 /**< \brief Number of supported axes*/

/*ECATCHANGE_START(V5.11) CiA402 1*/
/*ET9300 Project Handler :(#if FC1100_HW) lines 318 to 320 deleted*/
/*ECATCHANGE_END(V5.11) CiA402 1*/


/*---------------------------------------------
-    Module Identifications (each supported operation mode has a module)
-----------------------------------------------*/
#define CSV_CSP_MODULE_ID       0x00119800 /**< \brief Module Id for cyclic synchronous position/velocity mode (dynamic switching supported)*/
#define CSP_MODULE_ID           0x00219800 /**< \brief Module Id for cyclic synchronous position mode*/
#define CSV_MODULE_ID           0x00319800 /**< \brief Module Id for cyclic synchronous velocity mode*/


/**
 * \addtogroup PdoMappingObjects PDO Mapping Objects
 * csp/csv mode RxPDO mapping : 0x1600<br>
 * csp     mode RxPDO mapping : 0x1601<br>
 * csv     mode RxPDO mapping : 0x1602<br>
 * cst     mode RxPDO mapping : 0x1603<br>
 * csp/csv mode RxPDO mapping : 0x1A00<br>
 * csp     mode RxPDO mapping : 0x1A01<br>
 * csv     mode RxPDO mapping : 0x1A02<br>
 * cst     mode RxPDO mapping : 0x1A03<br>
 * @{
 */
/** \brief 0x1600 (csp/csv RxPDO) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
/*ECATCHANGE_START(V5.11) CiA402 1*/
   UINT32   aEntries[5]; /**< \brief Entry buffer*/
/*ECATCHANGE_END(V5.11) CiA402 1*/
} OBJ_STRUCT_PACKED_END
TOBJ1600;


/** \brief 0x1601 (csp RxPDO) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
   UINT32   aEntries[2]; /**< \brief Entry buffer*/
} OBJ_STRUCT_PACKED_END
TOBJ1601;


/** \brief 0x1602 (csv RxPDO) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
   UINT32   aEntries[2]; /**< \brief Entry buffer*/
} OBJ_STRUCT_PACKED_END
TOBJ1602;


/** \brief 0x1603 (cst RxPDO) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
   UINT32   aEntries[2]; /**< \brief Entry buffer*/
} OBJ_STRUCT_PACKED_END
TOBJ1603;


/** \brief 0x1A00 (csp/csv TxPDO) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
/*ECATCHANGE_START(V5.11) CiA402 1*/
   UINT32   aEntries[5]; /**< \brief Entry buffer*/
/*ECATCHANGE_END(V5.11) CiA402 1*/
} OBJ_STRUCT_PACKED_END
TOBJ1A00;


/** \brief 0x1A01 (csp TxPDO) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
   UINT32   aEntries[2]; /**< \brief Entry buffer*/
} OBJ_STRUCT_PACKED_END
TOBJ1A01;


/** \brief 0x1A02 (csv TxPDO) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
   UINT32   aEntries[3]; /**< \brief Entry buffer*/
} OBJ_STRUCT_PACKED_END
TOBJ1A02;


/** \brief 0x1A03 (csv TxPDO) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
   UINT32   aEntries[3]; /**< \brief Entry buffer*/
} OBJ_STRUCT_PACKED_END
TOBJ1A03;
/** @}*/


/**
 * \addtogroup SmAssignObjects SyncManager Assignment Objects
 * SyncManager 2 : 0x1C12<br>
 * SyncManager 3 : 0x1C13
 * @{
 */
/** \brief 0x1C12 (SyncManager 2 assignment) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
   UINT16   aEntries[MAX_AXES]; /**< \brief Entry buffer (number of entries depends on the supported axis, each axis requires one entry)*/
} OBJ_STRUCT_PACKED_END
TOBJ1C12;


/** \brief 0x1C13 (SyncManager 3 assignment) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
   UINT16   aEntries[MAX_AXES]; /**< \brief Entry buffer (number of entries depends on the supported axis, each axis requires one entry)*/
} OBJ_STRUCT_PACKED_END
TOBJ1C13;
/** @}*/


/**
 * \addtogroup CiA402Objects CiA402 Axis Objects
 * @{
 */
/** \brief 0x607D (Software Position Limit) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
   INT32    i32MinLimit; /**< \brief Minimum limit*/
   INT32    i32MaxLimit; /**< \brief Maximum limit*/
} OBJ_STRUCT_PACKED_END
TOBJ607D;

//Ìí¼Ó¶ÔÏó×Öµä
/** \brief 0x6099 (Software Position Limit) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
   UINT32    u32FastHomingSpeed; /**< \brief Fast homing speed*/
   UINT32    u32SlowHomingSpeed; /**< \brief Slow homing speed*/
} OBJ_STRUCT_PACKED_END
TOBJ6099;

/** \brief Object 0x60C2 (Interpolation Time Period) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
   UINT8    u8InterpolationPeriod; /**< \brief Interpolation period*/
   INT8     i8InterpolationIndex; /**< \brief Interpolation index*/
} OBJ_STRUCT_PACKED_END
TOBJ60C2;

/** \brief 0x60FE (Software Position Limit) data structure*/
typedef struct OBJ_STRUCT_PACKED_START {
   UINT16   u16SubIndex0; /**< \brief SubIndex 0*/
   UINT32    u32Outputs; /**< \brief Physical outputs*/
   UINT32    u32OutputMask; /**< \brief Output mask*/
} OBJ_STRUCT_PACKED_END
TOBJ60FE;
/** @}*/


/*---------------------------------------------
-    Generic Axis structure
-----------------------------------------------*/
/**
 * \addtogroup PDO Process Data Objects
 * @{
 */
/** \brief Data structure to handle the process data transmitted via 0x1A00 (csp/csv TxPDO)*/
typedef struct STRUCT_PACKED_START
{
    UINT16 ObjStatusWord; /**< \brief Status word (0x6041)*/
    INT32 ObjPositionActualValue; /**< \brief Actual position (0x6064)*/
    INT32 ObjVelocityActualValue; /**< \brief Actual velocity (0x606C)*/
    INT16 ObjTorqueActualValue; /**< \brief Actual Torque (0x6077)*/
    INT16 ObjModesOfOperationDisplay; /**< \brief Current mode of operation (0x6061)*/
}STRUCT_PACKED_END
TCiA402PDO1A00;


/** \brief Data structure to handle the process data transmitted via 0x1A01 (csp TxPDO)*/
typedef struct STRUCT_PACKED_START
{
    UINT16 ObjStatusWord; /**< \brief Status word (0x6041)*/
    INT32 ObjPositionActualValue; /**< \brief Actual position (0x6064)*/
}STRUCT_PACKED_END
TCiA402PDO1A01;


/** \brief Data structure to handle the process data transmitted via 0x1A02 (csv TxPDO)*/
typedef struct STRUCT_PACKED_START
{
    UINT16 ObjStatusWord; /**< \brief Status word (0x6041)*/
    INT32 ObjPositionActualValue; /**< \brief Actual position (0x6064)*/
    INT32 ObjVelocityActualValue; /**< \brief Actual position (0x606C)*/
}STRUCT_PACKED_END
TCiA402PDO1A02;


/** \brief Data structure to handle the process data transmitted via 0x1A03 (cst TxPDO)*/
typedef struct STRUCT_PACKED_START
{
    UINT16 ObjStatusWord; /**< \brief Status word (0x6041)*/
    INT32 ObjPositionActualValue; /**< \brief Actual position (0x6064)*/
    INT32 ObjTorqueActualValue; /**< \brief Actual position (0x6077)*/
}STRUCT_PACKED_END
TCiA402PDO1A03;

/** \brief Data structure to handle the process data transmitted via 0x1600 (csp/csv RxPDO)*/
typedef struct STRUCT_PACKED_START
{
    UINT16 ObjControlWord; /**< \brief Control word (0x6040)*/
    INT32 ObjTargetPosition; /**< \brief Target position (0x607A)*/
    INT32 ObjTargetVelocity; /**< \brief Target velocity (0x60FF)*/
    INT16 ObjTargetTorque; /**< \brief Target Torque (0x6071)*/
    INT16 ObjModesOfOperation; /**< \brief Mode of operation (0x6060)*/
}STRUCT_PACKED_END
TCiA402PDO1600;


/** \brief Data structure to handle the process data transmitted via 0x1601 (csp RxPDO)*/
typedef struct STRUCT_PACKED_START
{
    UINT16 ObjControlWord; /**< \brief Control word (0x6040)*/
    INT32 ObjTargetPosition; /**< \brief Target position (0x607A)*/
}STRUCT_PACKED_END
TCiA402PDO1601;


/** \brief Data structure to handle the process data transmitted via 0x1602 (csv RxPDO)*/
typedef struct STRUCT_PACKED_START
{
    UINT16 ObjControlWord; /**< \brief Control word (0x6040)*/
    INT32 ObjTargetVelocity; /**< \brief Target velocity (0x60FF)*/
}STRUCT_PACKED_END
TCiA402PDO1602;

/** \brief Data structure to handle the process data transmitted via 0x1603 (cst RxPDO)*/
typedef struct STRUCT_PACKED_START
{
    UINT16 ObjControlWord; /**< \brief Control word (0x6040)*/
    INT32 ObjTargetTorque; /**< \brief Target Torque (0x6071)*/
}STRUCT_PACKED_END
TCiA402PDO1603;
/** @}*/


/*ECATCHANGE_START(V5.11) CiA402 1*/
/*ET9300 Project Handler :(#if FC1100_HW) lines 564 to 566 deleted*/
/*ECATCHANGE_END(V5.11) CiA402 1*/

/**
 * \addtogroup CiA402Objects CiA402 Axis Objects
 * @{
 */
/** \brief Data structure to handle the axis specific object data*/
typedef struct OBJ_STRUCT_PACKED_START
{
    TOBJ1600 sRxPDOMap0; /**< \brief csv/csp RxPDO (0x1600)*/
    TOBJ1601 sRxPDOMap1; /**< \brief csp RxPDO (0x1601)*/
    TOBJ1602 sRxPDOMap2; /**< \brief csv RxPDO (0x1602)*/
    TOBJ1603 sRxPDOMap3; /**< \brief cst RxPDO (0x1603)*/
    TOBJ1A00 sTxPDOMap0; /**< \brief csv/csp TxPDO (0x1A00)*/
    TOBJ1A01 sTxPDOMap1; /**< \brief csp TxPDO (0x1A01)*/
    TOBJ1A02 sTxPDOMap2; /**< \brief csv TxPDO (0x1A02)*/
    TOBJ1A03 sTxPDOMap3; /**< \brief cst TxPDO (0x1A03)*/

    UINT16 objErrorCode; /**< \brief Error Code (0x603F)*/
    UINT16 objControlWord; /**< \brief Control Word (0x6040)*/
    UINT16 objStatusWord; /**< \brief Status Word (0x6041)*/
    INT16 objModesOfOperation; /**< \brief Modes of Operation (0x6060)*/
    INT16 objModesOfOperationDisplay; /**< \brief Mode of Operation Display (0x6061)*/
    INT32 objPositionActualInValue; /**< \brief Position actual internal value (0x6063)*/
    INT32 objPositionActualValue; /**< \brief Position Actual Value (0x6064)*/
    UINT32 objFollowingErrorWindow; /**< \brief Following error window (0x6065)*/
    INT32 objVelocityDemandValue; /**< \brief Velocity demand value (0x606B)*/
    INT32 objVelocityActualValue; /**< \brief Actual Velocity Value (0x606C)*/
    UINT16 objVelocityWindow; /**< \brief Velocity window (0x606D)*/
    UINT16 objVelocityWindowTime; /**< \brief Velocity window time (0x606E)*/
    INT16 objTargetTorque;/**< \brief Target torque (0x6071)*/
    UINT16 objMaxTorque;/**< \brief Max torque (0x6072)*/
    INT16 objTorqueActualValue; /**< \brief Torque Actual Value (0x6077)*/
    INT32 objTargetPosition; /**< \brief Target Position (0x607A)*/
    INT32 objHomeOffset; /**< \brief Home offset (0x607C)*/
    TOBJ607D objSoftwarePositionLimit; /**< \brief Software Position limit (0x607D)*/
    UINT32 objProfileVelocity; /**< \brief Profile velocity in pp-mode (0x6081)*/
    UINT32 objProfileAcceleration; /**< \brief Profile acceleration (0x6083)*/
    UINT32 objProfileDeceleration; /**< \brief Profile deceleration (0x6084)*/
    UINT32 objTorqueSlope; /**< \brief Torque slope (0x6087)*/
    INT16 objHomingMethod; /**< \brief Homing method (0x6098)*/
    TOBJ6099 objHomingSpeeds; /**< \brief Homing speeds (0x6099)*/
    UINT32 objHomingAcceleration; /**< \brief Homing acceleration (0x609A)*/
    INT32 objVelocityOffset; /**< \brief Velocity offset (0x60B1)*/
    INT32 objTorqueOffset; /**< \brief Torque offset (0x60B2)*/
    UINT16 objTouchProbeFunction;/**< \brief Touch probe function (0x60B8)*/
    UINT16 objTouchProbeStatus;/**< \brief Touch probe status (0x60B9)*/
    INT32 objTouchProbe1Positive; /**< \brief Touch probe 1 positive edge (0x60BA)*/
    INT32 objTouchProbe1Negative; /**< \brief Touch probe 1 negative edge (0x60BB)*/
    INT32 objTouchProbe2Positive; /**< \brief Touch probe 2 positive edge (0x60BC)*/
    INT32 objTouchProbe2Negative; /**< \brief Touch probe 2 negative edge (0x60BD)*/
    INT16 objInterpolationMode; /**< \brief Interpolation sub mode select (0x60C0)*/
    TOBJ60C2 objInterpolationTimePeriod; /**< \brief Interpolation Time Period (0x60C2)*/
    UINT16 objPositiveTorqueLimit;/**< \brief Positive torque limit (0x60E0)*/
    UINT16 objNegativeTorqueLimit;/**< \brief Negative torque limit (0x60E1)*/
    INT32 objFollowingErrorActual; /**< \brief Following error actual value (0x60F4)*/
    INT32 objPositionDemandInternal; /**< \brief Position demand internal value (0x60FC)*/
    UINT32 objDigitalInputs; /**< \brief Digital inputs (0x60FD)*/
    TOBJ60FE objDigitalOutputs; /**< \brief Digital outputs (0x60FE)*/
    INT32 objTargetVelocity; /**< \brief Target Velocity (0x60FF)*/
    UINT32 objSupportedDriveModes; /**< \brief Supported Drive Modes (0x6502)*/
}OBJ_STRUCT_PACKED_END
CiA402Objects;



#define CIA402_OBJECTS_SIZE     SIZEOF(CiA402Objects) /**< \brief Size of CiA402 object structure*/


/** \brief Data structure to handle an Cia402 axis*/
typedef struct
{
    BOOL        bAxisIsActive; /**< \brief Indicates if active is active*/
    BOOL        bBrakeApplied; /**< \brief Motor break is applied*/
    BOOL        bLowLevelPowerApplied; /**< \brief Low Level Power applied*/
    BOOL        bHighLevelPowerApplied; /**< \brief High Level Power applied*/
    BOOL        bAxisFunctionEnabled; /**< \brief Axis functions enabled*/
    BOOL        bConfigurationAllowed; /**< \brief Configuration allowed*/

    UINT16      i16State; /**< \brief Axis state*/
    UINT16      u16PendingOptionCode; /**< \brief Pending operation code*/
    double      fCurPosition; /**< \brief Current position within control loop*/
    UINT32      u32CycleTime; /**< \brief Motion controller cycletime in us*/


    CiA402Objects        Objects; /**< \brief CiA402 Axis object variable*/
    TOBJECT OBJMEM        * ObjDic; /**< \brief Pointer to Axis specific object dictionary*/
}
TCiA402Axis, *pTCiA402Axis;
/** @}*/

#endif //_CIA402_H_

#ifdef _CiA402_
    #define PROTO
#else
    #define PROTO extern
#endif

PROTO TCiA402Axis LocalAxes;
/*---------------------------------------------
-    Entry Descriptions and object names
-----------------------------------------------*/
#ifdef _CiA402_
/**
 * \addtogroup SmAssignObjects SyncManager Assignment Objects
 * @{
 */

/**
 * \brief Entry descriptions of SyncManager assign objects
 *
 * SubIndex0<br>
 * SubIndex1 (for all other entries the same description will be used (because the object code is ARRAY))
 */
OBJCONST TSDOINFOENTRYDESC    OBJMEM asPDOAssignEntryDesc[] = {
   {DEFTYPE_UNSIGNED8, 0x08, (ACCESS_READ|ACCESS_WRITE_PREOP)},
   {DEFTYPE_UNSIGNED16, 0x10, (ACCESS_READ|ACCESS_WRITE_PREOP)}};

   
/**
 * \brief Object 0x1C12 (Sync Manager 2 assign) object and entry names
 *
 * In this example no specific entry name is defined ("SubIndex xxx" is used)
 */   
OBJCONST UCHAR OBJMEM aName0x1C12[] = "RxPDO assign";

/**
 * \brief Object 0x1C13 (Sync Manager 3 assign) object and entry names
 *
 * In this example no specific entry name is defined ("SubIndex xxx" is used)
 */
OBJCONST UCHAR OBJMEM aName0x1C13[] = "TxPDO assign";
/** @}*/


/**
* \addtogroup PdoMappingObjects PDO Mapping Objects
* @{
*/
/**
 * \brief Object 0x1600 (csp/csv RxPDO) entry descriptions
 */
OBJCONST TSDOINFOENTRYDESC	OBJMEM asEntryDesc0x1600[] = {
   {DEFTYPE_UNSIGNED8, 0x8, ACCESS_READ }, /* Subindex 000 */
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 001*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 002*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 003*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 004*/
/*ECATCHANGE_START(V5.11) CiA402 1*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}}; /* SubIndex 005*/
/*ECATCHANGE_END(V5.11) CiA402 1*/


/**
 * \brief Object 0x1600 (csp/csv RxPDO) object and entry names
 *
 * In this example no specific entry name is defined ("SubIndex xxx" is used)
 */   
OBJCONST UCHAR OBJMEM aName0x1600[] = "csp/csv RxPDO\000\377";


/**
 * \brief Object 0x1601 (csp RxPDO) entry descriptions
 */
OBJCONST TSDOINFOENTRYDESC	OBJMEM asEntryDesc0x1601[] = {
   {DEFTYPE_UNSIGNED8, 0x8, ACCESS_READ }, /* Subindex 000 */
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 001*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}}; /* SubIndex 002*/


/**
 * \brief Object 0x1601 (csp RxPDO) object and entry names
 *
 * In this example no specific entry name is defined ("SubIndex xxx" is used)
 */   
OBJCONST UCHAR OBJMEM aName0x1601[] = "csp RxPDO\000\377";


/**
 * \brief Object 0x1602 (csv RxPDO) entry descriptions
 */
OBJCONST TSDOINFOENTRYDESC	OBJMEM asEntryDesc0x1602[] = {
   {DEFTYPE_UNSIGNED8, 0x8, ACCESS_READ }, /* Subindex 000 */
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 001*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}}; /* SubIndex 002*/


/**
 * \brief Object 0x1602 (csv RxPDO) object and entry names
 *
 * In this example no specific entry name is defined ("SubIndex xxx" is used)
 */      
OBJCONST UCHAR OBJMEM aName0x1602[] = "csv RxPDO\000\377";



/**
 * \brief Object 0x1603 (cst RxPDO) entry descriptions
 */
OBJCONST TSDOINFOENTRYDESC	OBJMEM asEntryDesc0x1603[] = {
   {DEFTYPE_UNSIGNED8, 0x8, ACCESS_READ }, /* Subindex 000 */
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 001*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}}; /* SubIndex 002*/


/**
 * \brief Object 0x1603 (csv RxPDO) object and entry names
 *
 * In this example no specific entry name is defined ("SubIndex xxx" is used)
 */
OBJCONST UCHAR OBJMEM aName0x1603[] = "cst RxPDO\000\377";



/**
 * \brief Object 0x1A00 (csp/csv TxPDO) entry descriptions
 */
OBJCONST TSDOINFOENTRYDESC	OBJMEM asEntryDesc0x1A00[] = {
   {DEFTYPE_UNSIGNED8, 0x8, ACCESS_READ }, /* Subindex 000 */
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 001*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 002*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 003*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 004*/
/*ECATCHANGE_START(V5.11) CiA402 1*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}}; /* SubIndex 005 */
/*ECATCHANGE_END(V5.11) CiA402 1*/

   
/**
 * \brief Object 0x1A00 (csp/csv TxPDO) object and entry names
 *
 * In this example no specific entry name is defined ("SubIndex xxx" is used)
 */      
OBJCONST UCHAR OBJMEM aName0x1A00[] = "csp/csv TxPDO\000\377";


/**
 * \brief Object 0x1A01 (csp RxPDO) entry descriptions
 */
OBJCONST TSDOINFOENTRYDESC	OBJMEM asEntryDesc0x1A01[] = {
   {DEFTYPE_UNSIGNED8, 0x8, ACCESS_READ }, /* Subindex 000 */
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 001*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}}; /* SubIndex 002 */


/**
 * \brief Object 0x1A01 (csp TxPDO) object and entry names
 *
 * In this example no specific entry name is defined ("SubIndex xxx" is used)
 */      
OBJCONST UCHAR OBJMEM aName0x1A01[] = "csp TxPDO\000\377";



/**
 * \brief Object 0x1A02 (csv RxPDO) entry descriptions
 */
OBJCONST TSDOINFOENTRYDESC	OBJMEM asEntryDesc0x1A02[] = {
   {DEFTYPE_UNSIGNED8, 0x8, ACCESS_READ }, /* Subindex 000 */
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 001*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 002*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}}; /* SubIndex 003 */

   
/**
 * \brief Object 0x1A02 (csv TxPDO) object and entry names
 *
 * In this example no specific entry name is defined ("SubIndex xxx" is used)
 */      
OBJCONST UCHAR OBJMEM aName0x1A02[] = "csv TxPDO\000\377";


/**
 * \brief Object 0x1A03 (cst RxPDO) entry descriptions
 */
OBJCONST TSDOINFOENTRYDESC	OBJMEM asEntryDesc0x1A03[] = {
   {DEFTYPE_UNSIGNED8, 0x8, ACCESS_READ }, /* Subindex 000 */
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 001*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}, /* SubIndex 002*/
   {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ}}; /* SubIndex 003 */


/**
 * \brief Object 0x1A03 (cst TxPDO) object and entry names
 *
 * In this example no specific entry name is defined ("SubIndex xxx" is used)
 */
OBJCONST UCHAR OBJMEM aName0x1A03[] = "cst TxPDO\000\377";
/** @}*/



/**
 * \addtogroup CiA402Objects CiA402 Axis Objects
 * @{
 */

/** \brief Object 0x603F (Error Code) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x603F = {DEFTYPE_UNSIGNED16, 0x10, ACCESS_READ};

/** \brief Object 0x603F (Error Code) object name*/
OBJCONST UCHAR OBJMEM aName0x603F[] = "Error Code";

/** \brief Object 0x6040 (Control Word) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6040 = {DEFTYPE_UNSIGNED16, 0x10, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x6040 (Control Word) object name*/
OBJCONST UCHAR OBJMEM aName0x6040[] = "Control Word";

/** \brief Object 0x6041 (Status Word) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6041 = {DEFTYPE_UNSIGNED16, 0x10, (ACCESS_READ|OBJACCESS_TXPDOMAPPING)};

/** \brief Object 0x6041 (Status Word) object name*/
OBJCONST UCHAR OBJMEM aName0x6041[] = "Status Word";

/** \brief Object 0x6060 (Modes of Operation) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6060 = {DEFTYPE_INTEGER8, 0x08, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x6060 (Modes of Operation) object name*/
OBJCONST UCHAR OBJMEM aName0x6060[] = "Modes of Operation";

/** \brief Object 0x6061 (Modes of Operation Display) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6061 = {DEFTYPE_INTEGER8, 0x08, (ACCESS_READ|OBJACCESS_TXPDOMAPPING)};

/** \brief Object 0x6061 (Modes of Operation Display) object name*/
OBJCONST UCHAR OBJMEM aName0x6061[] = "Modes of Operation Display";

/** \brief Object 0x6063 (Position actual internal value) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6063 = {DEFTYPE_INTEGER32, 0x20, ACCESS_READ};

/** \brief Object 0x6063 (Position actual internal value) object name*/
OBJCONST UCHAR OBJMEM aName0x6063[] = "Position Actual Internal Value";

/** \brief Object 0x6064 (Position Actual Value) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6064 = {DEFTYPE_INTEGER32, 0x20, (ACCESS_READ|OBJACCESS_TXPDOMAPPING)};

/** \brief Object 0x6064 (Position Actual Value) object name*/
OBJCONST UCHAR OBJMEM aName0x6064[] = "Position Actual Value";

/** \brief Object 0x6065 (Following error window) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6065 = {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READWRITE};

/** \brief Object 0x6065 (Following error window) object name*/
OBJCONST UCHAR OBJMEM aName0x6065[] = "Following Error Window";

/** \brief Object 0x606B (Velocity demand value) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x606B = {DEFTYPE_INTEGER32, 0x20, ACCESS_READ};

/** \brief Object 0x606B (Velocity demand value) object name*/
OBJCONST UCHAR OBJMEM aName0x606B[] = "Velocity Demand Value";

/** \brief Object 0x606C (Velocity Actual Value) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x606C = {DEFTYPE_INTEGER32, 0x20, (ACCESS_READ|OBJACCESS_TXPDOMAPPING)};

/** \brief Object 0x606C (Velocity Actual Value) object name*/
OBJCONST UCHAR OBJMEM aName0x606C[] = "Velocity Actual Value";

/** \brief Object 0x606D (Velocity window) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x606D = {DEFTYPE_INTEGER16, 0x10, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x606D (Velocity window) object name*/
OBJCONST UCHAR OBJMEM aName0x606D[] = "Velocity Window";

/** \brief Object 0x606E (Velocity window Time) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x606E = {DEFTYPE_INTEGER16, 0x10, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x606E (Velocity window Time) object name*/
OBJCONST UCHAR OBJMEM aName0x606E[] = "Velocity Window Time";

/** \brief Object 0x6071 (Target torque) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6071 = {DEFTYPE_INTEGER16, 0x10, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x6071 (Target torque) object name*/
OBJCONST UCHAR OBJMEM aName0x6071[] = "Target Torque";

/** \brief Object 0x6072 (Max torque) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6072 = {DEFTYPE_UNSIGNED16, 0x10, ACCESS_READWRITE};

/** \brief Object 0x6072 (Max torque) object name*/
OBJCONST UCHAR OBJMEM aName0x6072[] = "Max Torque";

/** \brief Object 0x6077 (Torque Actual Value) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6077 = {DEFTYPE_INTEGER16, 0x10, ACCESS_READ};

/** \brief Object 0x6077 (Torque Actual Value) object name*/
OBJCONST UCHAR OBJMEM aName0x6077[] = "Torque Actual Value";

/** \brief Object 0x607A (Target Position) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x607A = {DEFTYPE_INTEGER32, 0x20, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x607A (Target Position) object name*/
OBJCONST UCHAR OBJMEM aName0x607A[] = "Target Position";

/** \brief Object 0x607C (Home offset) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x607C = {DEFTYPE_UNSIGNED16, 0x20, ACCESS_READWRITE};

/** \brief Object 0x607C (Home offset) object name*/
OBJCONST UCHAR OBJMEM aName0x607C[] = "Home Offset";

/** 
 * \brief Object 0x607D (Software Position Limit) entry description
 * 
 * Subindex 0<br>
 * Subindex 1 : Min Position range limit<br>
 * Subindex 2 : Max Position range limit
 */
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x607D[] = {
    {DEFTYPE_UNSIGNED8, 0x08, ACCESS_READ},   
    {DEFTYPE_INTEGER32, 0x20, ACCESS_READWRITE},
    {DEFTYPE_INTEGER32, 0x20, ACCESS_READWRITE}}; 


/** \brief Object 0x607D (Software Position Limit) object and entry names*/
OBJCONST UCHAR OBJMEM aName0x607D[] = "Software Position Limit\000Min position limit\000Max position limit\000\377";

/** \brief Object 0x6081 (Profile velocity in pp-mode) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6081 = {DEFTYPE_UNSIGNED32, 0x20, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x6081 (Profile velocity in pp-mode) object name*/
OBJCONST UCHAR OBJMEM aName0x6081[] = "Profile Velocity in pp-mode";

/** \brief Object 0x6083 (Profile acceleration) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6083 = {DEFTYPE_UNSIGNED32, 0x20, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x6083 (Profile acceleration) object name*/
OBJCONST UCHAR OBJMEM aName0x6083[] = "Profile Acceleration";

/** \brief Object 0x6084 (Profile deceleration) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6084 = {DEFTYPE_UNSIGNED32, 0x20, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x6084 (Profile deceleration) object name*/
OBJCONST UCHAR OBJMEM aName0x6084[] = "Profile Deceleration";

/** \brief Object 0x6087 (Torque slope) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6087 = {DEFTYPE_UNSIGNED32, 0x20, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x6087 (Torque slope) object name*/
OBJCONST UCHAR OBJMEM aName0x6087[] = "Torque Slope";

/** \brief Object 0x6098 (Homing method) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6098 = {DEFTYPE_UNSIGNED8, 0x08, ACCESS_READWRITE};

/** \brief Object 0x6098 (Homing method) object name*/
OBJCONST UCHAR OBJMEM aName0x6098[] = "Homing Method";

/**
 * \brief Object 0x6099 (Homing speeds) entry description
 *
 * Subindex 0<br>
 * Subindex 1 : Fast homing speed<br>
 * Subindex 2 : Slow homing speed
 */
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6099[] = {
    {DEFTYPE_UNSIGNED8, 0x08, ACCESS_READ},
    {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READWRITE},
    {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READWRITE}};

/** \brief Object 0x6099 (Homing speeds) object and entry names*/
OBJCONST UCHAR OBJMEM aName0x6099[] = "Homing speeds\000Fast homing speed \000Slow homing speed\000\377";

/** \brief Object 0x609A (Homing acceleration) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x609A = {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READWRITE};

/** \brief Object 0x609A (Homing acceleration) object name*/
OBJCONST UCHAR OBJMEM aName0x609A[] = "Homing Acceleration";

/** \brief Object 0x60B1 (Velocity offset) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60B1 = {DEFTYPE_INTEGER32, 0x20, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x60B1 (Velocity offset) object name*/
OBJCONST UCHAR OBJMEM aName0x60B1[] = "Velocity Offset";

/** \brief Object 0x60B2 (Torque offset) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60B2 = {DEFTYPE_INTEGER16, 0x10, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x60B2 (Torque offset) object name*/
OBJCONST UCHAR OBJMEM aName0x60B2[] = "Torque Offset";

/** \brief Object 0x60B8 (Touch probe function) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60B8 = {DEFTYPE_UNSIGNED16, 0x10, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x60B8 (Touch probe function) object name*/
OBJCONST UCHAR OBJMEM aName0x60B8[] = "Touch Probe Function";

/** \brief Object 0x60B9 (Touch probe status) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60B9 = {DEFTYPE_UNSIGNED16, 0x10, (ACCESS_READWRITE|OBJACCESS_TXPDOMAPPING)};

/** \brief Object 0x60B9 (Touch probe status) object name*/
OBJCONST UCHAR OBJMEM aName0x60B9[] = "Touch Probe Status";

/** \brief Object 0x60BA (Touch probe 1 positive edge) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60BA = {DEFTYPE_INTEGER32, 0x20, (ACCESS_READ|OBJACCESS_TXPDOMAPPING)};

/** \brief Object 0x60BA (Touch probe 1 positive edge) object name*/
OBJCONST UCHAR OBJMEM aName0x60BA[] = "Touch Probe 1 Positive Edge";

/** \brief Object 0x60BB (Touch probe 1 negative edge) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60BB = {DEFTYPE_INTEGER32, 0x20, (ACCESS_READ|OBJACCESS_TXPDOMAPPING)};

/** \brief Object 0x60BB (Touch probe 1 negative edge) object name*/
OBJCONST UCHAR OBJMEM aName0x60BB[] = "Touch Probe 1 negative Edge";

/** \brief Object 0x60BC (Touch probe 2 positive edge) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60BC = {DEFTYPE_INTEGER32, 0x20, (ACCESS_READ|OBJACCESS_TXPDOMAPPING)};

/** \brief Object 0x60BC (Touch probe 2 positive edge) object name*/
OBJCONST UCHAR OBJMEM aName0x60BC[] = "Touch Probe 2 Positive Edge";

/** \brief Object 0x60BD (Touch probe 2 negative edge) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60BD = {DEFTYPE_INTEGER32, 0x20, (ACCESS_READ|OBJACCESS_TXPDOMAPPING)};

/** \brief Object 0x60BD (Touch probe 1 negative edge) object name*/
OBJCONST UCHAR OBJMEM aName0x60BD[] = "Touch Probe 2 negative Edge";

/** \brief Object 0x60C0 (Interpolation sub mode select) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60C0 = {DEFTYPE_INTEGER16, 0x10, ACCESS_READWRITE};

/** \brief Object 0x60C0 (Interpolation sub mode select) object name*/
OBJCONST UCHAR OBJMEM aName0x60C0[] = "Interpolation sub mode select";

/** 
 * \brief Object 0x60C2 (Interpolation Time Period) entry description
 *
 * Subindex 0<br>
 * Subindex 1 : Interpolation time period value<br>
 * Subindex 2 : Interpolation time index
 */
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x60C2[] = {
    {DEFTYPE_UNSIGNED8, 0x08, ACCESS_READ},
    {DEFTYPE_UNSIGNED8, 0x08, ACCESS_READWRITE},
    {DEFTYPE_INTEGER8, 0x08, ACCESS_READWRITE}};

/** \brief Object 0x60C2 (Interpolation Time Period) object and entry names*/
OBJCONST UCHAR OBJMEM aName0x60C2[] = "Interpolation Time Period\000Interpolation period \000Interpolation Index\000\377";

/** \brief Object 0x60E0 (Positive torque limit) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60E0 = {DEFTYPE_UNSIGNED16, 0x10, ACCESS_READWRITE};

/** \brief Object 0x60E0 (Positive torque limit) object name*/
OBJCONST UCHAR OBJMEM aName0x60E0[] = "Positive Torque Limit";


/** \brief Object 0x60E1 (Negative torque limit) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60E1 = {DEFTYPE_UNSIGNED16, 0x10, ACCESS_READWRITE};

/** \brief Object 0x60E1 (Negative torque limit) object name*/
OBJCONST UCHAR OBJMEM aName0x60E1[] = "Negative Torque Limit";

/** \brief Object 0x60F4 (Following error actual value) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60F4 = {DEFTYPE_INTEGER32, 0x20, (ACCESS_READ|OBJACCESS_TXPDOMAPPING)};

/** \brief Object 0x60F4 (Following error actual value) object name*/
OBJCONST UCHAR OBJMEM aName0x60F4[] = "Following error actual value";

/** \brief Object 0x60FC (Position demand internal value) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60FC = {DEFTYPE_INTEGER32, 0x20, (ACCESS_READ|OBJACCESS_TXPDOMAPPING)};

/** \brief Object 0x60FC (Position demand internal value) object name*/
OBJCONST UCHAR OBJMEM aName0x60FC[] = "Position demand internal value";

/** \brief Object 0x60FD (Digital inputs) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60FD = {DEFTYPE_INTEGER32, 0x20, ACCESS_READ};

/** \brief Object 0x60FD (Digital inputs) object name*/
OBJCONST UCHAR OBJMEM aName0x60FD[] = "Digital inputs";

/**
 * \brief Object 0x60FE (Digital outputs) entry description
 *
 * Subindex 0<br>
 * Subindex 1 : Interpolation time period value<br>
 * Subindex 2 : Interpolation time index
 */
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x60FE[] = {
    {DEFTYPE_UNSIGNED8, 0x08, ACCESS_READ},
    {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READWRITE},
    {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READWRITE}};

/** \brief Object 0x60FE (Digital outputs) object and entry names*/
OBJCONST UCHAR OBJMEM aName0x60FE[] = "Digital outputs\000Physical outputs \000Output mask\000\377";

/** \brief Object 0x60FF (Target Velocity) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60FF = {DEFTYPE_INTEGER32, 0x20, (ACCESS_READWRITE|OBJACCESS_RXPDOMAPPING)};

/** \brief Object 0x60FF (Target Velocity) object name*/
OBJCONST UCHAR OBJMEM aName0x60FF[] = "Target Velocity";


/** \brief Object 0x6502 (Supported Drive Modes) entry description*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6502 = {DEFTYPE_UNSIGNED32, 0x20, ACCESS_READ};

/** \brief Object 0x6502 (Supported Drive Modes) object name*/
OBJCONST UCHAR OBJMEM aName0x6502[] = "Supported Drive Modes";

#endif
;
/** @}*/




/**
 * \addtogroup SmAssignObjects SyncManager Assignment Objects
 * @{
 */

/**
 * \brief 0x1C12 (SyncManager 2 assignment) variable to handle object data
 * 
 * SubIndex 0 : 1<br>
 * SubIndex 1 : 0x1602
 * SubIndex 2 : 0
 */
PROTO TOBJ1C12 sRxPDOassign
#ifdef _CiA402_
= {1,0x1601}
#endif
;


/**
 * \brief 0x1C13 (SyncManager 3 assignment) variable to handle object data
 * 
 * SubIndex 0 : 1<br>
 * SubIndex 1 : 0x1A02<br>
 * SubIndex 2 : 0
 */
PROTO TOBJ1C13 sTxPDOassign
#ifdef _CiA402_
= {1,0x1A01}
#endif
;
/** @}*/





/**
 * \addtogroup CiA402Objects CiA402 Axis Objects
 * @{
 */
/**
 * \brief Axis objects default values
 *
 */
PROTO CiA402Objects DefCiA402ObjectValues
#ifdef _CiA402_
= {
/*ECATCHANGE_START(V5.11) CiA402 1*/
{5, {0x60400010,0x607A0020,0x60FF0020,0x60710010,0x60600008}},    /* TOBJ1600*/
/*ECATCHANGE_END(V5.11) CiA402 1*/
{2, {0x60400010,0x607A0020}}, /*TOBJ1601*/
{2, {0x60400010,0x60FF0020}}, /*TOBJ1602*/
{2, {0x60400010,0x60710010}}, /*TOBJ1603*/
/*ECATCHANGE_START(V5.11) CiA402 1*/
{5, {0x60410010,0x60640020,0x606C0020,0x60770010,0x60610008}}, /*TOBJ1A00*/
/*ECATCHANGE_END(V5.11) CiA402 1*/
{2, {0x60410010,0x60640020}}, /*TOBJ1A01*/
{3, {0x60410010,0x60640020,0x606C0020}},/*TOBJ1A02*/
{3, {0x60410010,0x60640020,0x60770010}},/*TOBJ1A03*/
0x0,/*(UINT16) ErrorCode 0x603F*/
0x0,/*(UINT16) ControlWord 0x6040*/
0x0,/*(UINT16) StatusWord 0x6041*/
0x0,/*(INT16) ModeOfOperation 0x6060*/
0x0,/*(INT16) Mode Of Operation Display 0x6061*/
0x0,/*(UINT32) Position actual internal value 0x6063*/
0x0,/*(INT32) Position Actual Value 0x6064*/
0x0,/*(UINT32) Following error window 0x6065*/
0x0,/*(INT32) Velocity demand value 0x606B*/
0x0,/*(INT32) Velocity Actual Value 0x606C*/
0x0,/*(UINT16) Velocity window 0x606D*/
0x0,/*(UINT16) Velocity window time 0x606E*/
0x0,/*(INT16) Target Torque 0x6071*/
0x0,/*(UINT16) Max Torque 0x6072*/
0x0,/*(INT16) Torque Actual Value 0x6077*/
0x0,/*(INT32) Target Position 0x607A*/
0x0,/*(INT32) Home offset 0x607C*/
{2,0x0,0x0},/*TOBJ607D Software Position Limit (minLimit: -2000000000 / maxLimit: 2000000000)*/
0x0,/*(UINT32)Profile velocity in pp-mode 0x6081*/
0x0,/*(UINT32)Profile acceleration 0x6083*/
0x0,/*(UINT32)Profile deceleration 0x6084*/
0x0,/*(UINT32)Torque slope 0x6087*/
0x0,/*(INT8)Homing method 0x6098*/
{2,0x0,0x0},/*TOBJ6099 Homing speeds*/
0x0,/*(UINT32)Homing acceleratio 0x609A*/
0x0,/*(UINT32)Velocity offset 0x60B1*/
0x0,/*(UINT32)Torque offset 0x60B2*/
0x0,/*(UINT16)Touch probe function 0x60B8*/
0x0,/*(UINT16)Touch probe status 0x60B9*/
0x0,/*(INT32)Touch probe 1 positive edge 0x60BA*/
0x0,/*(INT32)Touch probe 1 negative edge 0x60BB*/
0x0,/*(INT32)Touch probe 2 positive edge 0x60BC*/
0x0,/*(INT32)Touch probe 2 negative edge 0x60BD*/
0x0,/*(INT16)Interpolation sub mode select 0x60C0*/
{2,1,-3},/*TOBJ60C2 Interpolation Time Period*/
0x0,/*(UINT16) Positive torque limit 0x60E0*/
0x0,/*(UINT16) Negative torque limit 0x60E1*/
0x0,/*(INT32) Following error actual value 0x60F4*/
0x0,/*(INT32) Position demand internal value 0x60FC*/
0x0,/*(UINT32) Digital inputs 0x60FD*/
{2,0x0,0x0},/*0x60FE (Software Position Limit) data*/
0x0,/*(INT32) Target Velocity    0x60FF*/
0x0/*(UINT32) Supported Drive Modes 0x6502*/
}
#endif
;
/** @}*/


/**
 *\brief Base CiA402 device object dictionary
 */
PROTO TOBJECT    OBJMEM ApplicationObjDic[3]
#ifdef _CiA402_
= {/* Object 0x1C12 */
   {NULL,NULL, 0x1C12, {DEFTYPE_UNSIGNED16, MAX_AXES | (OBJCODE_ARR << 8)}, asPDOAssignEntryDesc, aName0x1C12, &sRxPDOassign, NULL, NULL, 0x0000 },
   /* Object 0x1C13 */
   {NULL,NULL, 0x1C13, {DEFTYPE_UNSIGNED16, MAX_AXES | (OBJCODE_ARR << 8)}, asPDOAssignEntryDesc, aName0x1C13, &sTxPDOassign, NULL, NULL, 0x0000 },
/*ECATCHANGE_START(V5.11) COE1*/
   {NULL,NULL, 0xFFFF, {0, 0}, NULL, NULL, NULL, NULL, NULL, 0x000}}
/*ECATCHANGE_END(V5.11) COE1*/
#endif
;



/**
 *\brief Object dictionary related to on CiA402 Axis
 */
PROTO TOBJECT    OBJMEM DefCiA402AxisObjDic[]
#ifdef _CiA402_
= {
    /* Object 0x1600 */
    {NULL,NULL, 0x1600, {DEFTYPE_PDOMAPPING, 5 | (OBJCODE_REC << 8)}, asEntryDesc0x1600, aName0x1600, NULL, NULL, NULL, 0x0000 },
    /* Object 0x1601 */
   {NULL,NULL, 0x1601, {DEFTYPE_PDOMAPPING, 2 | (OBJCODE_REC << 8)}, asEntryDesc0x1601, aName0x1601,NULL, NULL, NULL, 0x0000 },
    /* Object 0x1602 */
   {NULL,NULL, 0x1602, {DEFTYPE_PDOMAPPING, 2 | (OBJCODE_REC << 8)}, asEntryDesc0x1602, aName0x1602, NULL, NULL, NULL, 0x0000 },
   /* Object 0x1603 */
   {NULL,NULL, 0x1603, {DEFTYPE_PDOMAPPING, 2 | (OBJCODE_REC << 8)}, asEntryDesc0x1603, aName0x1603, NULL, NULL, NULL, 0x0000 },
   /* Object 0x1A00 */
   {NULL,NULL, 0x1A00, {DEFTYPE_PDOMAPPING, 5 | (OBJCODE_REC << 8)}, asEntryDesc0x1A00, aName0x1A00, NULL, NULL, NULL, 0x0000 },	
   /* Object 0x1A01 */
   {NULL,NULL, 0x1A01, {DEFTYPE_PDOMAPPING, 2 | (OBJCODE_REC << 8)}, asEntryDesc0x1A01, aName0x1A01, NULL, NULL, NULL, 0x0000 },	
   /* Object 0x1A02 */
   {NULL,NULL, 0x1A02, {DEFTYPE_PDOMAPPING, 3 | (OBJCODE_REC << 8)}, asEntryDesc0x1A02, aName0x1A02, NULL, NULL, NULL, 0x0000 },
   /* Object 0x1A03 */
   {NULL,NULL, 0x1A03, {DEFTYPE_PDOMAPPING, 3 | (OBJCODE_REC << 8)}, asEntryDesc0x1A03, aName0x1A03, NULL, NULL, NULL, 0x0000 },
   /* Object 0x603F */
   {NULL,NULL, 0x603F, {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x603F, aName0x603F, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6040 */
   {NULL,NULL, 0x6040, {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6040, aName0x6040, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6041 */
   {NULL,NULL, 0x6041, {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6041, aName0x6041, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6060 */
    {NULL,NULL, 0x6060, {DEFTYPE_INTEGER8 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6060, aName0x6060, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6061 */
   {NULL,NULL, 0x6061, {DEFTYPE_INTEGER8 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6061, aName0x6061, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6063 */
   {NULL,NULL, 0x6063, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6063, aName0x6063, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6064 */
   {NULL,NULL, 0x6064, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6064, aName0x6064, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6065 */
   {NULL,NULL, 0x6065, {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6065, aName0x6065, NULL, NULL, NULL, 0x0000 },
   /* Object 0x606B */
   {NULL,NULL, 0x606B, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x606B, aName0x606B, NULL, NULL, NULL, 0x0000 },
   /* Object 0x606C */
   {NULL,NULL, 0x606C, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x606C, aName0x606C, NULL, NULL, NULL, 0x0000 },
   /* Object 0x606D */
   {NULL,NULL, 0x606D, {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x606D, aName0x606D, NULL, NULL, NULL, 0x0000 },
   /* Object 0x606E */
   {NULL,NULL, 0x606E, {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x606E, aName0x606E, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6071 */
   {NULL,NULL, 0x6071, {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6071, aName0x6071, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6072 */
   {NULL,NULL, 0x6072, {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6072, aName0x6072, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6077 */
   {NULL,NULL, 0x6077, {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6077, aName0x6077, NULL, NULL, NULL, 0x0000 },
   /* Object 0x607A */
   {NULL,NULL, 0x607A, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x607A, aName0x607A, NULL, NULL, NULL, 0x0000 },
   /* Object 0x607C */
   {NULL,NULL, 0x607C, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x607C, aName0x607C, NULL, NULL, NULL, 0x0000 },
   /* Object 0x607D */
   {NULL,NULL, 0x607D, {DEFTYPE_INTEGER32 , 2 | (OBJCODE_ARR << 8)}, asEntryDesc0x607D, aName0x607D, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6081 */
   {NULL,NULL, 0x6081, {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6081, aName0x6081, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6083 */
   {NULL,NULL, 0x6083, {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6083, aName0x6083, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6084 */
   {NULL,NULL, 0x6084, {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6084, aName0x6084, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6087 */
   {NULL,NULL, 0x6087, {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6087, aName0x6087, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6098 */
   {NULL,NULL, 0x6098, {DEFTYPE_INTEGER8 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6098, aName0x6098, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6099 */
   {NULL,NULL, 0x6099, {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)}, asEntryDesc0x6099, aName0x6099, NULL, NULL, NULL, 0x0000 },
   /* Object 0x609A */
   {NULL,NULL, 0x609A, {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x609A, aName0x609A, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60B1 */
   {NULL,NULL, 0x60B1, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60B1, aName0x60B1, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60B2 */
   {NULL,NULL, 0x60B2, {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60B2, aName0x60B2, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60B8 */
   {NULL,NULL, 0x60B8, {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60B8, aName0x60B8, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60B9 */
   {NULL,NULL, 0x60B9, {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60B9, aName0x60B9, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60BA */
   {NULL,NULL, 0x60BA, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60BA, aName0x60BA, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60B1 */
   {NULL,NULL, 0x60BB, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60BB, aName0x60BB, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60BC */
   {NULL,NULL, 0x60BC, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60BC, aName0x60BC, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60BD */
   {NULL,NULL, 0x60BD, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60BD, aName0x60BD, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60C0 */
   {NULL,NULL, 0x60C0, {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60C0, aName0x60C0, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60C2 */
   {NULL,NULL, 0x60C2, {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)}, asEntryDesc0x60C2, aName0x60C2, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60E0 */
   {NULL,NULL, 0x60E0, {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60E0, aName0x60E0, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60E1 */
   {NULL,NULL, 0x60E1, {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60E1, aName0x60E1, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60F4 */
   {NULL,NULL, 0x60F4, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60F4, aName0x60F4, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60FC */
   {NULL,NULL, 0x60FC, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60FC, aName0x60FC, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60FD */
   {NULL,NULL, 0x60FD, {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60FD, aName0x60FD, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60FE */
   {NULL,NULL, 0x60FE, {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)}, asEntryDesc0x60FE, aName0x60FE, NULL, NULL, NULL, 0x0000 },
   /* Object 0x60FF */
   {NULL,NULL, 0x60FF, {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x60FF, aName0x60FF, NULL, NULL, NULL, 0x0000 },
   /* Object 0x6502 */
   {NULL,NULL, 0x6502, {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)}, &sEntryDesc0x6502, aName0x6502, NULL, NULL, NULL, 0x0000 },
   {NULL,NULL, 0xFFFF, {0, 0}, NULL, NULL, NULL, NULL, NULL, 0x000}}
#endif
;


/*ET9300 Project Handler :(#if EXPLICIT_DEVICE_ID) lines 1250 to 1252 deleted*/

#if EXPLICIT_DEVICE_ID
PROTO UINT16 APPL_GetDeviceID(void);
#endif

PROTO void CiA402_LocalError(UINT16 ErrorCode);
PROTO void CiA402_StateMachine(void);
PROTO UINT16 CiA402_Init(void);
PROTO void CiA402_DeallocateAxis(void);
extern void CiA402_Application(TCiA402Axis *pCiA402Axis);
#undef PROTO
/** @}*/
