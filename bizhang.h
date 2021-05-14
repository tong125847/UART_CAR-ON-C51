#ifndef __BIZHANG_H__
#define __BIZHANG_H__

#include "reg51.h"


#define uchar unsigned char
#define uint  unsigned int
	
sbit out_left =P1^0;
sbit out_right=P1^1;

sbit  P3_4 = P3^4;


	



void bizhang();

#endif