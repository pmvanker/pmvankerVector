#include <reg51.h>
#include "delay.h"
#include "lcd.h"
#include "i2c.h"

main()
{
	unsigned char temp;

	lcd_init();
	lcd_cmd(0x80);
	lcd_string("00:00:00");
	lcd_cmd(0xc0);
	lcd_string("00-00-20");
	i2c_device_write(0xd0,0x0,0x50);	
	while(1)
	{
		temp=i2c_device_read(0xd0,0x0);																								//sec
		lcd_cmd(0x86);
		lcd_data(temp/16+48);
		lcd_data(temp%16+48);
	}
}