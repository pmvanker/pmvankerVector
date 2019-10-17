#include<reg51.h>
sbit LED = P0^0;
unsigned char c=0;
void timer_delay(void) interrupt 1
{
	TR0 =0;
	c++;
	TH0=0x3c;
	TL0=0xAF;
	TR0=1;
}
void main()
{
	P0=0xff;
	TMOD =0x01;			//timer 0 mode 1 16bitmode
	TH0=0x3c;
	TL0=0xAF;
	EA=ET0=1;
	TR0=1;
	
	while(1)
	{
	if(c==20)
	{
		c=0;
		LED=~LED;
	}
}
	
}