#include <REGX51.H>
#include "delay.h"
#include "lcd.h"
void main()
{
	lcd_init();
	lcd_string("V16BE3V2");
	while(1);
}
	