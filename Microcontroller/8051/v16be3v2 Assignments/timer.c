#include <REGX51.H>
void timer_delay(unsigned int);
sbit LED = P0^0;
void main()
{
	while(1)
	{
		LED = ~LED;
		timer_delay(500);
	}
}
void timer_delay(unsigned int n)
{
	TMOD = 0x00	;					// timer 0 mode 0
	while(n)
	{
		TH0  = 0xE0;
		TL0  = 0x17+2;
		TR0  = 1;
		while(TF0==0);
		TR0  = 0;
		TF0  = 0;
		n--;
	}
}