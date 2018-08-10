#include <REGX51.H>
#include "delay.h"
#include "lcd16x2.h"
void main()
{
unsigned char cmd[5]={0x38,0x0e,0x01,0x06,0x80};
unsigned char s[20] = "Vanker Praful";
unsigned char i;
	for(i=0;i<5;i++)
	{
	 lcdcmd(cmd[i]);
	 delay(100);
	}
	for(i=0;s[i];i++)
	{
		lcddata(s[i]);
		delay(100);
	}
	while(1)
	{
		for(i=0;s[i];i++)
		{
			lcdcmd(0x18);
			delay(1000);
		}
	}
}