#include <REGX51.H>
#include "delay.h"
#include "lcd.h"
void main()
{
lcd_init();
while(1)
	{
	lcd_cmd(0x82);
	lcd_integer(-1234);
	lcd_cmd(0xc0);
	lcd_float(123.51);
	}
}

