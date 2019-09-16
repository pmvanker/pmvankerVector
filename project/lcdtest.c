#include<reg51.h>
#include"delay.h"
#include"lcd.h"

	void build_cgram()
{
	char i;
	lcd_cmd(0x40);
	for(i=0;i<8;i++)
	lcd_data(praful[i]);
	lcd_cmd(0x80);	
}
main()
{
	lcd_init();
	build_cgram();
	while(1)
	{
		lcd_cmd(0x80);
		lcd_data(0);
	}
}