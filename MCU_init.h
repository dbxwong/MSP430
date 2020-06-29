/*MCU_init.h
This routine contains the initializations for the ultra low power microcontroller
platform for home health applications (MSP430). 

It initializes the MCU and its peripherals:
ACLK, DCO, interrupts

It containts the interrupt service routines for the following modules:
ADC10, USCIA, Timer_A0

22 December 2008 by David Wong Bingxiong
*/

#ifndef MCU_INIT_H
#define MCU_INIT_H

void MCU_Init(void);
static uint8_t sCB(linkID_t lid);
__interrupt void ADC10_ISR(void);
__interrupt void Timer_A (void);
__interrupt void USCI0RX_ISR(void);





#endif