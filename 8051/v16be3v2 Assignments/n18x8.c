#include<reg51.h>
#include"delay.h"
sfr led=0x80;
sbit clk1 = P2^0;
sbit dat1  = P2^1;
sbit clk2 = P2^2;
sbit dat2  = P2^3;
sbit clk3 = P2^4;
sbit dat3  = P2^5;
sbit clk4 = P2^6;
sbit dat4  = P2^7;

code unsigned char p[8]={0x38,0x7e,0x66,0x66,0x7e,0x7c,0x60,0x60} ;
void delay1(int n)
{
	while(n--);
}
void main()
{
	while(1)
	{
	char i,j,temp;
	for(i=0;i<8;i++)
		{
			led=0x00;
			temp=~p[i];
			for(j=0;j<=7;j++)
				{
					dat1=((temp>>j)&1)?1:0;
					clk1=0;
					delay1(2);
					clk1=1;
				}
			led=1<<i;
			delay(1);
		}
	}
}	
