 #include "delay.h"
 
 
// void delay1ms(uint c)	   
// {
// uint a,b;
// for(a=c;a>0;a--);
// for(b=112;b>0;b--); 
// }
// 
void delay(uint x)  //ÑÓÊ±º¯Êý
{uchar i;
while(x--)
for(i=0;i<200;i++);
}