#include<reg51.h>
#include"delay.h"
#include"lcd.h"
void main()
{
	lcd_init();
	lcd_string("v16be3v2");
	while(1);
	
}