
#ifndef MCIHWF2837XD_H_
#define MCIHWF2837XD_H_


/*-----------------------------------------------------------------------------------------
------
------    Includes
------
-----------------------------------------------------------------------------------------*/
#include <string.h>
#include "esc.h"
#include "F28x_Project.h"     // Device Headerfile and Examples Include File
#include <stdlib.h>


/*-----------------------------------------------------------------------------------------
------
------    Defines and Types
------
-----------------------------------------------------------------------------------------*/

#define ESC_MEM_ADDR    UINT16 /**< \brief ESC address type (16Bit)*/
#define ESC_MEM_SHIFT   1 /**< \brief shift to convert Byte address to ESC address type*/


/**
 * \todo Define the hardware timer ticks per millisecond.
 */
#define ECAT_TIMER_INC_P_MS   ESC_timerIncPerMilliSec()

#define HW_GetTimer()				ESC_getTimer()
#define HW_ClearTimer()				ESC_clearTimer()



//#warning "define access to timer register(counter)"
#define     HW_GetALEventRegister()             ((((volatile UINT16 ESCMEM *)0x300000)[((ESC_AL_EVENT_OFFSET)>>1)])) /**< \brief Returns the first 16Bit of the AL Event register (0x220)*/
#define     HW_GetALEventRegister_Isr           HW_GetALEventRegister /**< \brief Returns the first 16Bit of the AL Event register (0x220).<br>Called from ISRs.*/

#define     HW_EscRead(pData,Address,Len)       ESCMEMCPY((MEM_ADDR *)(pData), &((ESC_MEM_ADDR ESCMEM *) 0x300000)[((Address) >> ESC_MEM_SHIFT)], (Len)) /**< \brief Generic ESC (register and DPRAM) read access.*/
#define     HW_EscReadIsr                       HW_EscRead /**< \brief Generic ESC (register and DPRAM) read access.<br>Called for ISRs.*/
#define     HW_EscReadDWord(DWordValue, Address)    ((DWordValue) = (UINT32)(((volatile UINT32 *)0x300000)[(Address>>2)])) /**< \brief 32Bit specific ESC (register and DPRAM) read access.*/
#define     HW_EscReadDWordIsr(DWordValue, Address) ((DWordValue) = (UINT32)(((volatile UINT32 *)0x300000)[(Address>>2)])) /**< \brief 32Bit specific ESC (register and DPRAM) read access.<br>Called from ISRs.*/
#define     HW_EscReadDDWordIsr(DDWordValue, Address) ((DDWordValue) = (UINT64)(((volatile UINT64 *)0x300000)[(Address>>2)])) /**< \brief 32Bit specific ESC (register and DPRAM) read access.<br>Called from ISRs.*/
#define     HW_EscReadWord(WordValue, Address)  ((WordValue) = (((volatile UINT16 *)0x300000)[((Address)>>1)])) /**< \brief 16Bit specific ESC (register and DPRAM) read access.*/
#define     HW_EscReadWordIsr(WordValue, Address) HW_EscReadWord(WordValue, Address) /**< \brief 16Bit specific ESC (register and DPRAM) read access.<br>Called from ISRs.*/
#define     HW_EscReadMbxMem(pData,Address,Len) ESCMBXMEMCPY((MEM_ADDR *)(pData), &((ESC_MEM_ADDR ESCMEM *) 0x300000)[((Address) >> ESC_MEM_SHIFT)], (Len)) /**< \brief Macro to copy data from the application mailbox memory(not the ESC memory, this access is handled by HW_EscRead).*/


#define     HW_EscWrite(pData,Address,Len)      ESCMEMCPY(&((ESC_MEM_ADDR ESCMEM *) 0x300000)[((Address)>>ESC_MEM_SHIFT)], (MEM_ADDR *)(pData), (Len)) /**< \brief Generic ESC (register and DPRAM) write access.*/
#define     HW_EscWriteIsr                      HW_EscWrite /**< \brief Generic ESC (register and DPRAM) write access.<br>Called for ISRs.*/
#define     HW_EscWriteDWord(DWordValue, Address)   ((((volatile UINT32 *)0x300000)[(Address>>2)]) = (DWordValue)) /**< \brief 32Bit specific ESC (register and DPRAM) write access.*/
#define     HW_EscWriteDWordIsr(DWordValue, Address)((((volatile UINT32 *)0x300000)[(Address>>2)]) = (DWordValue)) /**< \brief 32Bit specific ESC (register and DPRAM) write access.<br>Called from ISRs.*/
#define     HW_EscWriteWord(WordValue, Address) ((((volatile UINT16 *)0x300000)[((Address)>>1)]) = (WordValue)) /**< \brief 16Bit specific ESC (register and DPRAM) write access.*/
#define     HW_EscWriteWordIsr(WordValue, Address) HW_EscWriteWord(WordValue, Address) /**< \brief 16Bit specific ESC (register and DPRAM) write access.<br>Called from ISRs.*/
#define     HW_EscWriteMbxMem(pData,Address,Len)    ESCMBXMEMCPY(&((ESC_MEM_ADDR ESCMEM *) 0x300000)[((Address)>>ESC_MEM_SHIFT)],(MEM_ADDR *)(pData), (Len)) /**< \brief Macro to copy data from the application mailbox memory (not the ESC memory, this access is handled by HW_EscWrite).*/


#define     ESC_RD                    0x02 /**< \brief Indicates a read access to ESC or EEPROM*/
#define     ESC_WR                    0x04 /**< \brief Indicates a write access to ESC or EEPROM.*/


/*-----------------------------------------------------------------------------------------
------
------    Global variables
------
-----------------------------------------------------------------------------------------*/
#define PROTO extern

#define ENABLE_ESC_INT()	 __asm(" clrc INTM")
#define DISABLE_ESC_INT()	 __asm(" setc INTM")

/*-----------------------------------------------------------------------------------------
------
------    Global functions
------
-----------------------------------------------------------------------------------------*/
PROTO interrupt void  xint1_sync0_isr(void);
PROTO interrupt void  xint2_irq_isr(void);
PROTO UINT16 f2837xd_Init(void);
extern UINT32 ESC_getTimer();

extern void ESC_clearTimer(void);

extern UINT32 ESC_timerIncPerMilliSec(void);

PROTO uint16_t ESC_readWordNonISR(uint16_t offset);
PROTO void ESC_writeWordNonISR(uint16_t WordValue, uint16_t Address);

extern void setup_emif1_pinmux_async_16bit_option2(Uint16 cpu_sel); // EMIF driver call

#endif /* MCIHWF2837XD_H_ */
/** @}*/
