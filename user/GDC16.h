/**
 * \addtogroup GDC16 GDC16
 * @{
 */

/**
\file GDC16.h
\brief GDC16 function prototypes and defines

\version 1.0.0.11
 */

 
 #ifndef _GDC16_H_
#define _GDC16_H_


/*-----------------------------------------------------------------------------------------
------
------    Includes
------
-----------------------------------------------------------------------------------------*/
#define PROTO extern

//#include "GDCObjects.h"

/*-----------------------------------------------------------------------------------------
------
------    Defines and Types
------
-----------------------------------------------------------------------------------------*/

extern void APPL_Application(void);
extern void APPL_OutputMapping(UINT16* pData);
extern void APPL_InputMapping(UINT16* pData);
extern UINT16 APPL_GenerateMapping(UINT16 *pInputSize,UINT16 *pOutputSize);
extern UINT16 APPL_StartInputHandler(UINT16 *pIntMask);
extern UINT16 APPL_StopInputHandler(void);
extern UINT16 APPL_StartOutputHandler(void);
extern UINT16 APPL_StopOutputHandler(void);
extern void   APPL_AckErrorInd(UINT16 stateTrans);
extern UINT16 APPL_StartMailboxHandler(void);
extern UINT16 APPL_StopMailboxHandler(void);
extern void Output_GDCmapping(void);
extern void Input_GDCmapping(void);
extern UINT16 GDC_ObjDictionaryInit(void);

extern void Shared_Ram_cpu2_WR_Upload(UINT32 index);
extern void Shared_Ram_cpu2_WR_Download(UINT32 index,UINT32 *pData);



#endif //_GDC16_H_

//include custom application object dictionary 

/** @}*/

