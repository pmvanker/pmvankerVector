#include <REGX51.H>
#include "delay.h"
#include "lcd.h"
void lcd_2digit(unsigned int);
void lcd_rotate(unsigned char *);
void main()
{
	unsigned int ss,hh,mm;		  					// second hour and minute
	ss=mm=hh=0;
	lcd_init();										// lcd intilaiztion
	lcd_cmd(0x82);								   // print hh,mm,ss first
	lcd_string("00:00:00");
	while(1)
	{ 	
		do
		{
			lcd_cmd(0x88);												  // print ss
			lcd_2digit(ss++);											  // post incrment for ss
			delay(1000);												  // 1 sec delay
		}while(ss<=59);													  // sec == 60 conditon fail
		if(ss==60)
		{
			ss=0;														  // clear second
			lcd_cmd(0x85);												  // jump to minute
			lcd_2digit(++mm);
			if(mm==60)
			{
				mm=0;
				lcd_cmd(0x82);
				lcd_2digit(++hh);
				if(hh==24)
				hh=0;
			}
		}
	}			
}
void lcd_2digit(unsigned int n)
{
 lcd_data(n/10+48);
 lcd_data(n%10+48);
}	