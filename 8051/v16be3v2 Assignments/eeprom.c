#include<reg51.h>
#include"delay.h"
#include"lcd.h"
#include"i2c.h"

void main()
{
 unsigned char temp;
 lcd_init();
 i2c_device_write(0xa0,0x2,'P');
 temp=i2c_device_read(0xa0,0x2);
 lcd_data(temp);
 while(1);
}