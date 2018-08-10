#include<reg51.h>
#include"delay.h"
sfr led=0x80;
sbit clk1 = P2^0;
sbit dat1  = P2^1;
code unsigned char p[8]={0x00,0xfe,0xff,0x33,0x33,0x3f,0x1e,0x00} ;
void print1(unsigned char *t)
{
 unsigned char i;
 	   	dat1=0;
		for(i=0;i<8;i++)
		{
			led=t[i];
			clk1=0;
			delay(1);
			clk1=1;
			dat1=1;
		}
}
//
//void rotate (unsigned char *t)
//{
//	unsigned char i,temp;
//	temp=t[0];
//	for(i=0;i<8;i++)
//	{
//	 if(i==7)
//	 {
//	  t[i]=temp;
//	  break;
//	 }
//	 t[i]=t[i+1];
//	}
//}
void main()
{
   while(1)
   {
	   	print1(p);
  }
}

