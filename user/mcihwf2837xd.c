
/*-----------------------------------------------------------------------------------------
------
------    Includes
------
-----------------------------------------------------------------------------------------*/
#include "ecat_def.h"

#define    _MCIHWF2837XD_ 1
#include <mcihwf2837xd.h>
#undef _MCIHW_
#define    _MCIHW_ 0

#include "ecatslv.h"
#include "ecatappl.h"

/*--------------------------------------------------------------------------------------
------
------    local Types and Defines
------
--------------------------------------------------------------------------------------*/


/*-----------------------------------------------------------------------------------------
------
------    local variables and constants
------
-----------------------------------------------------------------------------------------*/
TSYNCMAN    TmpSyncMan;

/*-----------------------------------------------------------------------------------------
------
------    local functions
------
-----------------------------------------------------------------------------------------*/

/*-----------------------------------------------------------------------------------------
------
------    functions
------
-----------------------------------------------------------------------------------------*/



/////////////////////////////////////////////////////////////////////////////////////////
/**
\return     0 if initialization was successful

 \brief    This function initialize the EtherCAT Slave Interface.
*////////////////////////////////////////////////////////////////////////////////////////

UINT16 f2837xd_Init(void)
{
    
#ifdef FLASH
// Copy time critical code and Flash setup code to RAM
// The  RamfuncsLoadStart, RamfuncsLoadEnd, and RamfuncsRunStart
// symbols are created by the linker. Refer to the linker files.
    memcpy(&RamfuncsRunStart, &RamfuncsLoadStart, (uint32_t)&RamfuncsLoadSize);
#endif


	InitSysCtrl();

	// Only used if running from FLASH
	// Note that the variable FLASH is defined by the compiler

#ifdef FLASH
// Call Flash Initialization to setup flash waitstates
// This function must reside in RAM
	InitFlash();	// Call the flash wrapper init function
#endif //(FLASH)


 	DINT;
//  Initialize the PIE control registers to their default state.
//  The default state is all PIE interrupts disabled and flags
//  are cleared.
//  This function is found in the F2837xD_PieCtrl.c file.
    InitPieCtrl();

// Disable CPU interrupts and clear all CPU interrupt flags:
    EALLOW;
	IER = 0x0000;
	IFR = 0x0000;
	EDIS;

// Initialize the PIE vector table with pointers to the shell Interrupt
// GService Routines (ISR).
// This will populate the entire table, even if the interrupt
// is not used in this example.  This is useful for debug purposes.
// The shell ISR routines are found in F2837xD_DefaultIsr.c.
// This function is found in F2837xD_PieVect.c.
   InitPieVectTable();

   //
   // Wait until Shared RAM is available.
   //
//   while(!( MemCfgRegs.GSxMSEL.bit.MSEL_GS0 &
//               MemCfgRegs.GSxMSEL.bit.MSEL_GS14 ))
//   {
//   }


   EALLOW;
   PieVectTable.XINT1_INT =  &xint1_sync0_isr;
   PieVectTable.XINT2_INT = &xint2_irq_isr;
   EDIS;

// Enable XINT1  in the PIE: Group 1 interrupt 4 & 5
// Enable INT1 which is connected to WAKEINT:

   PieCtrlRegs.PIECTRL.bit.ENPIE = 1;          // Enable the PIE block
   PieCtrlRegs.PIEIER1.bit.INTx4 = 1;          // Enable PIE Group 1 INT4 XINT1 SYNC0
   PieCtrlRegs.PIEIER1.bit.INTx5 = 1;          // Enable PIE Group 1 INT5 XINT2 IRQ
   PieCtrlRegs.PIEIER12.bit.INTx1 = 1;         //Enable PIE Group 12 INT1 XINT3 SYNC1
   PieCtrlRegs.PIEIER1.bit.INTx7 = 1;          // Enable TINT0 in the PIE: Group 1 __interrupt 7
   IER |= M_INT1;                              // Enable CPU INT1
   EINT;                                       // Enable Global Interrupts

//Configure to run EMIF1 on full Rate (EMIF1CLK = CPU1SYSCLK/2)
  EALLOW;
  ClkCfgRegs.PERCLKDIVSEL.bit.EMIF1CLKDIV = 0x1;
  ClkCfgRegs.PERCLKDIVSEL.bit.EMIF2CLKDIV = 0x1;
  EDIS;

  EALLOW;
  InitGpio(); // Default setup for all pins
  InitCpuTimers();


// GPIO29 inputs SYNC0 signal

   EALLOW;
   GpioCtrlRegs.GPAGMUX2.bit.GPIO29 =0;        // GPIO29
   GpioCtrlRegs.GPADIR.bit.GPIO29 = 0;          // input
   GpioCtrlRegs.GPAQSEL2.bit.GPIO29 = 0;        // XINT1 Synch to SYSCLKOUT only
// GPIO28 inputs IRQ signal
   GpioCtrlRegs.GPAMUX2.bit.GPIO28 = 0;         //GPIO28
   GpioCtrlRegs.GPADIR.bit.GPIO28 = 0;          //input
   GpioCtrlRegs.GPAQSEL2.bit.GPIO28 = 0;       //
   GpioCtrlRegs.GPACTRL.bit.QUALPRD3 = 0xFF;   // Each sampling window
                                                     // is 510*SYSCLKOUT
   EDIS;

  // GPIO29 is XINT1 SYNC0 ,GPIO28 is XINT2 IRQ, GPIO34 is XINT3 SYNC1

   GPIO_SetupXINT1Gpio(29);//SYNC0 GPIO29
   GPIO_SetupXINT2Gpio(28);//IRQ GPIO28



  // Configure XINT1 XINT2 XINT3

   XintRegs.XINT1CR.bit.POLARITY = 1;          // up edge interrupt
   XintRegs.XINT2CR.bit.POLARITY = 1;          //up edge interrupt



  // Enable XINT1

   XintRegs.XINT1CR.bit.ENABLE = 1;            // Enable XINT1
   XintRegs.XINT2CR.bit.ENABLE = 1;            //Enable XINT2


//对EMIF1进行配置

  Emif1ConfigRegs.EMIF1MSEL.all = (uint32_t) 0x93A5CE71;

  // Disable Access Protection (CPU_FETCH/CPU_WR/DMA_WR)
  Emif1ConfigRegs.EMIF1ACCPROT0.all = 0x0;

  // Commit the configuration related to protection. Till this bit remains set
  // content of EMIF1ACCPROT0 register can't be changed.
  Emif1ConfigRegs.EMIF1COMMIT.all = 0x1;

  // Lock the configuration so that EMIF1COMMIT register can't be changed any more.
  Emif1ConfigRegs.EMIF1LOCK.all = 0x1;

//配置EMIF管脚
  setup_emif1_pinmux_async_16bit_option2(0);

  //Configure the access timing for CS3 space
  Emif1Regs.ASYNC_CS3_CR.all =  (EMIF_ASYNC_ASIZE_16  	|
								 EMIF_ASYNC_TA_3 		|	// Wr to Rd turnaround
								 EMIF_ASYNC_RHOLD_8 	|	//
								 EMIF_ASYNC_RSTROBE_28 	|	//
								 EMIF_ASYNC_RSETUP_6 	|	//
								 EMIF_ASYNC_WHOLD_4 	|	//
								 EMIF_ASYNC_WSTROBE_26 	|	//
								 EMIF_ASYNC_WSETUP_8	|
								 EMIF_ASYNC_EW_ENABLE	|	// EMIF_ASYNC_EW_DISABLE
								 EMIF_ASYNC_SS_DISABLE		// Strobe Select Mode Disable.
  		  	  	  	  	  	  	);
  Emif1Regs.ASYNC_WCCR.bit.WP0 = 1;             // Active-high Wait Polarity for EM1WAIT.
  Emif1Regs.ASYNC_WCCR.bit.MAX_EXT_WAIT = 0x1;

  EALLOW;

  //CpuTimer0Regs.TCR.bit.TIE = 1;
  CpuTimer0Regs.TCR.bit.TSS = 0;	//start timer

	DELAY_US(500 * 1000);

    /* we have to wait here, until the ESC is started */

    return 0;
}


/////////////////////////////////////////////////////////////////////////////////////////
/**
 \brief    Interrupt service routine for the interrupts from the EtherCAT Slave Controller
*////////////////////////////////////////////////////////////////////////////////////////
//时间中断

UINT32 ESC_getTimer(void)
{
    //C28x timer is decrements from 0xFFFFFFFF while the stack understands it as of
    //increment type.
    return ~ ((uint32_t)(CpuTimer0Regs.TIM.all));
}

//去除时间中断，将时间中断加入主循环中
uint32_t ESC_timerIncPerMilliSec(void)
{
    return (uint32_t) 200000UL; //at 200MHz
}

void ESC_clearTimer(void)
{
    CpuTimer0Regs.TIM.all = 0;
}


//SYNC0中断
interrupt void xint1_sync0_isr(void)
{
	Sync0_Isr();
	PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}

//IRQ中断
interrupt void xint2_irq_isr(void)
{
	PDI_Isr();
	PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}

//SYNC1中断
interrupt void xint3_sync1_isr(void)
{
	Sync1_Isr();
	PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}

uint16_t ESC_readWordNonISR(uint16_t offset)
{
	uint16_t value1=0,value=0,i;
	DINT;
	for(i=0;i<10;i++)
	{
		value1 = ((((volatile uint16_t *)0x300000)[((offset)>>1)]));
		value = value | value1;

	}
	EINT;
	return value;
}

void ESC_writeWordNonISR(uint16_t WordValue, uint16_t Address)
{
	DINT;
	((((volatile uint16_t *)0x300000)[((Address)>>1)]) = (WordValue));
	EINT;
}

/** @} */
