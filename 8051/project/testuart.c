#include<reg51.h>
#include"delay.h"
#include"uart.h"

void main()
{
	unsigned char ch;
	while(1)
	{
		ch = uart_rx();
		uart_tx(ch);
	}
	
}