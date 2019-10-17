#include<reg51.h>
#include"uart.h"
void uart_rx_string(char *p)
{
unsigned char i=0,ch;
	while(1)
	{
			ch=uart_rx();
			if((ch==10) || (ch==13))
			{
			p[i]=0;
			return;
			}
			p[i++]=ch;
			uart_tx(ch);
	}
}


void main()
{
unsigned char a[50];
uart_init();
uart_tx_string("Enter string:");
uart_rx_string(a);
uart_tx_string(a);
while(1);
}