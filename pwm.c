#include "pwm.h"

uint time;
extern uint tiaozheng;
 void CarForward()
 {
   A_IA=1;
   A_IB=0;
   B_IA=1;
   B_IB=0;
  }
 void CarBack()
 {
   A_IA=0;
   A_IB=1;
   B_IA=0;
   B_IB=1;
  }
   void CarLeft()
 {
   A_IA=0;
   A_IB=0;
   B_IA=0;
   B_IB=1;
  }
 void CarRight()
 {
   A_IA=0;
   A_IB=1;
   B_IA=0;
   B_IB=0;
  }
   void CarStop()
 {
   A_IA=0;
   A_IB=0;
   B_IA=0;
   B_IB=0;
  }
  void JDQ1()
  {
   JDQ=1;
  
  }
   void JDQ2()
  {
   JDQ=0;
  
  }
	
	
	void pwm_out(void) //pwm波形输出
	{
		if(time>30)
		{ 
			time=0;
		}
		if(time<30-tiaozheng)//gengai
		{
			pwm=1;
			pwm2=1;
		}
		else 
		{
		  pwm=0;
			pwm2=0;
		}
	
	}
	
	
	
/*TIMER0中断服务函数产生PWM信号*/
	void timer0() interrupt 1
	{
		TH0=0XEC;   //5ms定时
		TL0=0X78;
		time++;
		pwm_out();
	
	}
	
