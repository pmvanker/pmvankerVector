#include <REGX51.H>
#include "delay.h"

code char step[4]={0x0c,0x06,0x03,0x09};
void main()
{
	unsigned char i;
	while(1)
	{
		for(i=0;i<4;i++)
		{
			P0=step[i];
			//delay(5);
		}
	}
}