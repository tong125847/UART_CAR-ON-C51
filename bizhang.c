#include "bizhang.h"
#include "delay.h"
#include "pwm.h"
#include "usart.h"
#include <stdio.h>
void bizhang()
{
	 //printf("bizhang is On\n");
	while(1)
	{      
							
					
					       //有信号为1  没有信号为0
                if(out_left==0&&out_right==0)
                {
                
                    CarForward();   //调用前进函数    
										
                }          
                if(out_left==0&&out_right==1)            //右边检测到障碍物
                {
                        
                        
                        CarBack();
                        delay(30);
                        CarLeft();                    //调用小车左转函数
                        delay(50);
												
                
                }                           
                if(out_left==1&&out_right==0 )                //左边检测到障碍物
                {          
                        
                        
                        CarBack();
                        delay(30);
                        CarRight();                   //调用小车右转函数
                        delay(50);
												
                        
                }
                if (out_left==1&&out_right==1 )                //左边检测到障碍物
                {          
                        CarBack();                 //调用小车右转函数
												
								}
					 if(SBUF=='9')  
							break;
						
			} CarStop(); 
	}
