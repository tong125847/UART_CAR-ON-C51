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
							
					
					       //���ź�Ϊ1  û���ź�Ϊ0
                if(out_left==0&&out_right==0)
                {
                
                    CarForward();   //����ǰ������    
										
                }          
                if(out_left==0&&out_right==1)            //�ұ߼�⵽�ϰ���
                {
                        
                        
                        CarBack();
                        delay(30);
                        CarLeft();                    //����С����ת����
                        delay(50);
												
                
                }                           
                if(out_left==1&&out_right==0 )                //��߼�⵽�ϰ���
                {          
                        
                        
                        CarBack();
                        delay(30);
                        CarRight();                   //����С����ת����
                        delay(50);
												
                        
                }
                if (out_left==1&&out_right==1 )                //��߼�⵽�ϰ���
                {          
                        CarBack();                 //����С����ת����
												
								}
					 if(SBUF=='9')  
							break;
						
			} CarStop(); 
	}
