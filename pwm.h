#ifndef __PWM_H
#define __PWM_H

#include "reg51.h"

#define uchar unsigned char
#define uint  unsigned int
	

sbit  A_IA=P0^0;
sbit  A_IB=P0^1;  
sbit  B_IA=P0^2;
sbit  B_IB=P0^3;
sbit  JDQ =P2^0;
sbit  pwm =P2^4;
sbit  pwm2=P2^5;
  void CarForward();  //ǰ��
  void CarBack();	    //����
  void CarLeft();	    //����
  void CarRight();	  //����
  void CarStop();	    //ֹͣ
  void JDQ1();		    //����
  void JDQ2();		    //�ص�
  void pwm_out(void);//pwm�������

#endif