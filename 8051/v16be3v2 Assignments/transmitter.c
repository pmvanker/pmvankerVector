#include<reg51.h>
#include"delay.h"
#include"lcd.h"
#include"uart.h"

void main()
{
	unsigned char temp;
	lcd_init();
	uart_init();
	lcd_string("Serial Data:");
	lcd_cmd(0xc0);
	while(1)
	{
				lcd_data(uart_rx());
	}
}