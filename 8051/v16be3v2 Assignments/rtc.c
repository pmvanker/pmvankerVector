#include<reg51.h>
#include"delay.h"
#include"lcd.h"
#include"i2c.h"

main()
{
	unsigned char temp;
 	lcd_init();
	i2c_device_write(0xd0,0x0,0x51);
	while(1)
	{
	 temp = i2c_device_read(0xd0,0x0);
	 lcd_cmd(0x80);
	 lcd_data(temp/16+48);
	 lcd_data(temp%16+48);
	 }
}