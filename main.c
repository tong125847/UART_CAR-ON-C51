/*
================================================================
													��������
================================================================
  Powered By��TONG 
	College��WHWLXY
	Version��1.0.4
	Project�������ֻ��������Ƶ�����С����ҵ���(������벿��)
	|
	|---main
	|
	|---delay
	|
  |---usart
	|
	|---pwm
	|
	|.....
	|
================================================================
*/
#include <reg51.h>
#include "delay.h"
#include "usart.h"
#include "pwm.h"
#include "beep.h"
#include "bizhang.h"
#include <stdio.h>

#define uchar unsigned char
#define uint  unsigned int

	
uchar receiveData;	//���ܵ�����
uchar flag;

uint tiaozheng=0;
//extern int uflag;
void add(void);
void decrease(void);

void main()
  {	  JDQ=0;
		  P1=0X00;
		  P2=0x00|0xcf;
		  P3_4=0x00;
		  buzzer=0x00;
      UsartInit();

      while (1)
			{
			if (flag ==1)
			{
			switch(receiveData)
			{
				case '2':
					//beep();
					CarForward();
					ES=0;
					SBUF=receiveData;	
					while(!TI);
					TI=0;
					ES=1;
					flag=0;
					break;
				case '8':
					//beep();
					CarBack();
					ES=0;
					SBUF=receiveData;	
					while(!TI);
					TI=0;
					ES=1;
					flag=0;
					break;
				case '6':
					//beep();
				  CarLeft();
					ES=0;
					SBUF=receiveData;	
					while(!TI);
					TI=0;
					ES=1;
					flag=0;
					break;
				case '4':
					//beep();
					CarRight();
				  ES=0;
					SBUF=receiveData;	
					while(!TI);
					TI=0;
					ES=1;
					flag=0;
					break;
				case '5':
					//beep();
				  CarStop();
					ES=0;
					SBUF=receiveData;	
					while(!TI);
					TI=0;
					ES=1;
					flag=0;
					break;
			  case '0':
					//beep();
				  JDQ1();
					ES=0;
					SBUF=receiveData;	
					while(!TI);
					TI=0;
					ES=1;
					flag=0;
					break;
			  case '1':
					//beep();
				  JDQ2();
				  ES=0;
					SBUF=receiveData;	
					while(!TI);
					TI=0;
					ES=1;
					flag=0;
					break;
				case '7':
					beep();
					bizhang();
				  ES=0;
					SBUF=receiveData;	
					while(!TI);
					TI=0;
					ES=1;
					flag=0;
					break;	
				case 'a':
					beep();
				  add();
				  ES=0;
					SBUF=receiveData;	
					while(!TI);
					TI=0;
					ES=1;
					flag=0;
					break;
				case 'd':
					beep();
				  decrease();
				  ES=0;
					SBUF=receiveData;	
					while(!TI);
					TI=0;
					ES=1;
					flag=0;
					break;
			}		
		}
	}
}

 void Usart()interrupt 4	  
 {
 receiveData=SBUF;			//�������� 
 RI=0;						//�رռ�ʱ�� 
 //SBUF=receiveData;			 //�������ݣ������� 
 flag=1;
 }

 void add(void)
 {   
	 tiaozheng++;
   if(tiaozheng>30)
		{ 
			tiaozheng=0;
		}
 }
 
 
 void decrease(void)
 {
    tiaozheng--;
	 if(tiaozheng==0)
		{ 
			tiaozheng=30;
		}
 }