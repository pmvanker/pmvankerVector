#include <reg51.h>
#include "delay.h"
#include "uart.h"
#include "lcd.h"
#include "i2c.h"

void set_time()
{
	unsigned char i,s,m,h;
	unsigned char buff[10];
	uart_tx_string("hh:mm:ss\r\n");
	for(i=0;i<10;i++)
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
			
			i2c_device_write(0xd0,0x0,s);
			i2c_device_write(0xd0,0x1,m);
			i2c_device_write(0xd0,0x2,h);
}

void set_date()
{
	unsigned char i,dd,mm,yy;
	unsigned char buff[10];
	uart_tx_string("DD-MM-YY DAY\r\n");
	for(i=0;i<10;i++)
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
		ch=uart_rx();
		if(ch=='t')
			set_time();
		else if(ch=='d')
			set_date();
		else
			return;
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

main()
{
	lcd_init();
	uart_init();
	EA=ES=1;
	lcd_cmd(0x80);
	lcd_string("00:00:00");
	lcd_cmd(0xc0);
	lcd_string("00-00-20");
 	while(1)
	{
		sec();
		min();
		hour();
		date();
		month();
		year();	
	}
}