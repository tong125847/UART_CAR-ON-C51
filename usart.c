#include "usart.h"  
#include <stdio.h>
	
void UsartInit()
  {
  /*TMOD |=0x20;			  
  SCON =0x50;			  
  PCON =0x00;			  //4800bps
  TH1=0xfd;				  //如果你用的是9600bps,初值为TH1=0xFA;TH1=0xFA;
  TL1=0xfd;
  ES=1;					   
  EA=1;					   
  TR1=1;				   
  */
	TMOD=0x21;		 //设置定时器1的工作方式2   0010 0000  GATE C/T    8位初值自动重装8位定时器
	SCON =0x50;			
	PCON=0x00;	
	TH1=0xfd;				  //如果你用的是9600bps,初值为TH1=0xFA;TH1=0xFA;
  TL1=0xfd;
	TH0=0XEC;      //5ms定时    
	TL0=0X78;  	
	TR0=1;
	TR1=1;
	ET0=1;
	ES=1;
	EA=1;
	TI=1;
			  printf("UsartInit is OK!\n");
	}
	
