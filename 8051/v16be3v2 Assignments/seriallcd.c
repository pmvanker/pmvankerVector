#include<reg51.h>
#include"delay.h"
#include"lcd.h"
#include"uart.h"

void main()
{
	lcd_init();
	uart_init();
	lcd_string("Serial Data:");
	lcd_cmd(0xc0);
	while(1)
	{
		unsigned char ch;
		ch=uart_rx();
		switch(ch)
		{
			case 0x08:
				lcd_cmd(0x10);
			  lcd_data(' ');
			  lcd_cmd(0x10);
			 	break;
			default:
				lcd_data(ch);			
		}
	}
}