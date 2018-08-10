#include <REGX51.H>
#include "delay.h"

sfr SEG = 0x80;
sbit S1 = P2^0;
sbit S2 = P2^1;

code unsigned char s[10]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};

void display2seg(int);

void main()
{						
	unsigned char c;
	unsigned char i;
	while(1)
	for(c=0;c<59;c++)
	{
		for(i=0;i<100;i++)
		display2seg(c);		
	}
	
	while(1);
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










