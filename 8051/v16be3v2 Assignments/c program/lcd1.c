#include<reg51.h>
#include"delay.h"
#include"lcd.h"
#include"uart.h"

code unsigned char hextable[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
void lcd_hex(unsigned char c)
{
	unsigned char t;
	t=c&0xf0;
	t=t>>4;
	lcd_data(hextable[t]);
	t=c&0x0f;
	lcd_data(hextable[t]);	
}
void main()
{
  unsigned char ch=0;

	lcd_init();
	uart_init();
  while(1)
  {
   			ch = uart_rx();
			lcd_cmd(0x80);
			lcd_string("ASC: ");
			lcd_data(ch);
			
			
			lcd_cmd(0xc0);
			lcd_string("DEC: ");
			lcd_integer(ch);

			lcd_string(" 0x");
		  lcd_hex(ch);
					
		delay(1000);
		lcd_cmd(0x01);
			
   }


}