#include<reg51.h>
#include"delay.h"
#include"lcd.h"
#include"i2c.h"

#define sec 0x00 		//	00 - 60
#define min 0x01		//	00 - 60
#define hour 0x02		//  00 - 23  || 1 - 12
#define day 0x03		//  0  -  6  || SUN - SAT
#define date 0x04		//  1  - 28/29/30/31
#define month 0x05		//  0  - 11  || JAN - DEC
#define year 0x06		//  00 - 99

code char days[6][3]={"SUN","MON","TUE","WED","THS","FRI","SAT"};
code char months[11][3]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
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