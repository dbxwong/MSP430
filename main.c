/*
This is the main.c routine for the ultra low microcontroller platform for home
health applications, based on MSP430 platform. 

22nd December 2008, David Wong Bingxiong, Ngee Ann Polytechnic 
Diploma in Biomedical Engineering

*/
#include "msp430x22x4.h"
#include "bsp.h"
#include "mrfi.h"
#include "bsp_leds.h"
#include "bsp_buttons.h"
#include "nwk_types.h"
#include "nwk_api.h"
#include "nwk_frame.h"
#include "nwk.h"
#include "MCU_init.h"
#include "Rxtx.h"




void main (void){
  WDTCTL = WDTPW + WDTHOLD;                 // Stop WatchdogTimer
   
 
      
    for(;;){//main work loop
  
  
  
    }//end forever loop
}//end main loop