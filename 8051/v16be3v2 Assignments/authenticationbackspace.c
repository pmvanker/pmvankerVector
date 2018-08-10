#include<reg51.h>
#include"delay.h"
#include"uart.h"
unsigned char mystrcmp(char *p,char *q)
{
	unsigned int i;
	for(i=0;p[i]||q[i];i++)
	{
		if(p[i]!=q[i])
			return 0;
	}
	return 1;
}

void main()
{
	unsigned char buff[7],ch;
	unsigned char pw[6]="praful";
	int i=0;
	uart_init();
	uart_tx_string("\n\rEnter Password\n\r");
	while(1)
	{
		ch=uart_rx();
		uart_tx(ch);
		if(ch==0x08)
		{
			if(i<0)
			{
				i=0;
				continue;
			}
			i--;
			uart_tx(' ');
			buff[i]=' ';
			i--;
			continue;
		}
		if(ch==13 || ch==10)
			break;
		buff[i++]=ch;		
	}
	buff[i]=0;
	uart_tx_string("\r\n");
	uart_tx_string(buff);
	ch=mystrcmp(buff,pw);
	ch?uart_tx_string("\n\rWelcome\n\r"):uart_tx_string("\n\rAccess denied\n\r");
	while(1);
}


	