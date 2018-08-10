#include <reg51.h>
#include "delay.h"
#include "uart.h"
#include "lcd.h"
#include "i2c.h"
sbit led = P2^7;
code unsigned char days[7][4]={"SUN\0","MON\0","TUE\0","WED\0","THS\0","FRI\0","SAT\0"};
void alaram()
{
	unsigned char i,h,m,s;
	unsigned char buff[10];
	lcd_cmd(0x80+15);
	lcd_data(0); 
	uart_tx_string("hh:mm:ss\r\n");
	for(i=0;i<15;i++)
		{
			buff[i]=uart_rx();
			if(buff[i]==13)
				break;
			uart_tx(buff[i]);
		}
			uart_tx_string(buff);
			buff[0]=buff[0]-0x30;
			buff[0]=buff[0]<<4;
			buff[1]=buff[1]-0x30;
			h=buff[0]|buff[1];

			buff[3]=buff[3]-0x30;
			buff[3]=buff[3]<<4;
			buff[4]=buff[4]-0x30;
			m=buff[3]|buff[4];
			
			buff[6]=buff[6]-0x30;
			buff[6]=buff[6]<<4;
			buff[7]=buff[7]-0x30;
			s=buff[6]|buff[7];
		
			i2c_device_write(0xa0,0x0,s);
			i2c_device_write(0xa0,0x1,m);
			i2c_device_write(0xa0,0x2,h);
}
void set_time()
{
	unsigned char i,s,m,h;
	unsigned char buff[10];
	uart_tx_string("hh:mm:ss AM/PM\r\n");
	for(i=0;i<15;i++)
		{
			buff[i]=uart_rx();
			if(buff[i]==13)
				break;
			uart_tx(buff[i]);
		}
			uart_tx_string(buff);
			buff[0]=buff[0]-0x30;
			buff[0]=buff[0]<<4;
			buff[1]=buff[1]-0x30;
			h=buff[0]|buff[1];

			buff[3]=buff[3]-0x30;
			buff[3]=buff[3]<<4;
			buff[4]=buff[4]-0x30;
			m=buff[3]|buff[4];
			
			buff[6]=buff[6]-0x30;
			buff[6]=buff[6]<<4;
			buff[7]=buff[7]-0x30;
			s=buff[6]|buff[7];
			
		  lcd_cmd(0x80+9);
			if(buff[9]=='a')
				 lcd_string("AM");
			else
				 lcd_string("PM");
						 						
			i2c_device_write(0xd0,0x0,s);
			i2c_device_write(0xd0,0x1,m);
			i2c_device_write(0xd0,0x2,h);
}

void set_date()
{
	unsigned char i,dd,mm,yy;
	unsigned char buff[20];
	uart_tx_string("DD-MM-YY DAY\r\n");
	for(i=0;i<20;i++)
		{
			buff[i]=uart_rx();
			if(buff[i]==13)
				break;
			uart_tx(buff[i]);
		}
			uart_tx_string(buff);
			buff[0]=buff[0]-0x30;
			buff[0]=buff[0]<<4;
			buff[1]=buff[1]-0x30;
			dd=buff[0]|buff[1];

			buff[3]=buff[3]-0x30;
			buff[3]=buff[3]<<4;
			buff[4]=buff[4]-0x30;
			mm=buff[3]|buff[4];
			
			buff[6]=buff[6]-0x30;
			buff[6]=buff[6]<<4;
			buff[7]=buff[7]-0x30;
			yy=buff[6]|buff[7];
			
			if(buff[9]=='s' && buff[10]=='u')
				i2c_device_write(0xd0,0x3,0x0);
			else if(buff[9]=='m' && buff[10]=='o')
				i2c_device_write(0xd0,0x3,0x1);
			else if(buff[9]=='t' && buff[10]=='u')
				i2c_device_write(0xd0,0x3,0x2);
			else if(buff[9]=='w' && buff[10]=='e')
				i2c_device_write(0xd0,0x3,0x3);
			else if(buff[9]=='t' && buff[10]=='h')
				i2c_device_write(0xd0,0x3,0x4);
			else if(buff[9]=='f' && buff[10]=='r')
				i2c_device_write(0xd0,0x3,0x5);
			else if(buff[9]=='s' && buff[10]=='a')
				i2c_device_write(0xd0,0x3,0x6);

			i2c_device_write(0xd0,0x4,dd);
			i2c_device_write(0xd0,0x5,mm);
			i2c_device_write(0xd0,0x6,yy);
}

void UART_HANDLER (void) interrupt 4
{
unsigned char ch;
	if(RI==1)
	{
		RI=0;
		uart_tx_string("d.setdate\r\n");
		uart_tx_string("t.settime\r\n");
		uart_tx_string("options\r\n");
		ch=uart_rx();
		if(ch=='t')
			set_time();
		else if(ch=='d')
			set_date();
		else
			uart_tx_string("\r\nDo you want to set alaram\r\n");
			ch=uart_rx();
			if(ch=='y')
				alaram();
	}
}

void sec()
{
	unsigned char temp;
	temp=i2c_device_read(0xd0,0x0);																								//sec
	lcd_cmd(0x86);
	lcd_data(temp/16+48);
	lcd_data(temp%16+48);
}
void min()
{
	unsigned char temp;
	temp=i2c_device_read(0xd0,0x1);																								//min
	lcd_cmd(0x83);
	lcd_data(temp/16+48);
	lcd_data(temp%16+48);
}
void hour()
{
	unsigned char temp;
	temp=i2c_device_read(0xd0,0x2);																								//hour
	lcd_cmd(0x80);
	lcd_data(temp/16+48);
	lcd_data(temp%16+48);
}
bit compare()
{
	unsigned char buff[3],n[3],i;
	buff[0]=i2c_device_read(0xd0,0x0);	
	buff[1]=i2c_device_read(0xd0,0x1);	
	buff[2]=i2c_device_read(0xd0,0x2);	
	n[0]=i2c_device_read(0xa0,0x0);	
	n[1]=i2c_device_read(0xa0,0x1);	
	n[2]=i2c_device_read(0xa0,0x2);	
	for(i=0;i<3;i++)
	{
		if(buff[i]!=n[i])
			return 0;
	}
	return 1;
}

void date()
{
	unsigned char temp;
	temp=i2c_device_read(0xd0,0x4);																								//date
	lcd_cmd(0xc0);
	lcd_data(temp/16+48);
	lcd_data(temp%16+48);	
}
void month()
{
	unsigned char temp;
	temp=i2c_device_read(0xd0,0x5);																								//month
	lcd_cmd(0xc0+3);
	lcd_data(temp/16+48);
	lcd_data(temp%16+48);
}
void year()
{
	unsigned char temp;
	temp=i2c_device_read(0xd0,0x6);																								//year
	lcd_cmd(0xc0+8);
	lcd_data(temp/16+48);
	lcd_data(temp%16+48);
}
void day()
{
	unsigned char temp;
	temp=i2c_device_read(0xd0,0x3);
		lcd_string(days[temp]);
}
main()
{
	unsigned char al;
	lcd_init();
	uart_init();
	EA=ES=1;
	lcd_cmd(0x80);
	lcd_string("00:00:00 AM");
	lcd_cmd(0xc0);
	lcd_string("00-00-20");
	build_cgram();
	led=1;
 	while(1)
	{
		sec();
		min();
		hour();
		date();
		month();
		year();	
		day();
		al=compare();
		if(al==1)
		{
			lcd_cmd(0x80+15);
    	lcd_data(1); 
			for(al=0;al<30;al++)
			{
			 led = 0;
			 delay(100);
			 led = 1;
			 delay(100);
			}
			led=0;
		}
		else
		 led = 1;
	}
	
}