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
	unsigned char buff[4];
	unsigned char i;
	unsigned char pw[3]="123";
	uart_init();
	

	uart_tx_string("Enter Password\r\n");
	for(i=0;i<3;i++)
	{
		buff[i]=uart_rx();
	}
	buff[i]=0;
	
	i=mystrcmp(buff,pw);
	if(i)
	uart_tx_string("WELCOME\r\n");
	else
		uart_tx_string("wrong PW\r\n");
	while(1);
}
