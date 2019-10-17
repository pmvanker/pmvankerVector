#include <REGX51.H>
#include "delay.h"

sfr SEG = 0x80;
sbit S1 = P2^0;
sbit S2 = P2^1;
sbit SW1 = P2^7;
sbit SW2 = P2^6;
sbit SW3 = P2^5;

code unsigned char s[10]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};

void display2seg(int);

void main()
{						
	static unsigned char c=10;
	unsigned char i;
	do
	{
		for(i=0;i<200;i++)
		display2seg(c);
		if(SW1 == 0)
		{
			c++;
			while(SW1 == 0);
		}
		if(SW2 == 0)
		{
			c--;
			while(SW2 == 0);
		}
		if(SW3 == 0)
		{
			do{
				while(SW3==0);
				for(i=0;i<200;i++)
				{
					display2seg(c);
					delay(20);
				}
				c--;
				}while(c);
		}
		
	}while(c<99);
	c=0;
}
	
void display2seg(int n)
{
	SEG = s[n/10];
	S1 = 0;
	delay(2);
	S1 = 1;
	
	SEG = s[n%10];
	S2 = 0;
	delay(2);
	S2 = 1;	
}










