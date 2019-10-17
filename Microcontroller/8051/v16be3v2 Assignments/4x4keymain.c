#include <REGX51.H>
#include "delay.h"
#include "7seg.h"
#include "keypad.h"

void main()
{
	unsigned char temp,dly;
	
	while(1)
	{
		temp = keyscan();
		for(dly=255;dly>0;dly--)
		{
			display2seg(temp);
		}
	}
	
	
}