#include "beep.h"


void beep() //蜂鸣器发出声音，模拟按键的声音
{ 
buzzer=0;
delay(10);
buzzer=1;
delay(10);
buzzer=0;
}
