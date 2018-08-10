#include<reg51.h>
#include"delay.h"
#include"uart.h"
#include"lcd.h"

// unsigned char mystrcmp(char *p,char *q)
// {
// 	unsigned int i;
// 	for(i=0;p[i]||q[i];i++)
// 	{
// 		if(p[i]!=q[i])
// 			return 0;
// 	}
// 	return 1;
// }
void main()
{
	unsigned char buff[10];
	unsigned char i;
	uart_init();
	lcd_init();
	lcd_string("RFID NO");
	for(i=0;i<10;i++)
	{
		buff[i]=uart_rx();
	}
	lcd_cmd(0xc0);
	lcd_string(buff);
	while(1);
}
