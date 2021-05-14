#ifndef __BEEP_H
#define __BEEP_H

#include "reg51.h"
#include "delay.h"

sbit  buzzer = P2^1;


void beep();

#endif