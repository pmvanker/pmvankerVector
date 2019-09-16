#include <REGX51.H>
#include "delay.h"
#include "lcd.h"
void main(void)
{
	unsigned char mybyte;
	TMOD=0x20; //use Timer 1, mode 2
	TH1=0xFD; //9600 baud rate
	SCON=0x50;
	TR1=1;
	lcd_init();
	lcd_string("serial :");
	while (1) 
	{ 
		while (RI==0); 
		mybyte=SBUF; 
		lcd_data(mybyte);
		RI=0;
	}
}