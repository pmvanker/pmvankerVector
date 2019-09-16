#include<reg51.h>
sfr led=0x80;
sbit clk1 = P2^0;
sbit dat1  = P2^1;
sbit clk2 = P2^2;
sbit dat2  = P2^3;
sbit clk3 = P2^4;
sbit dat3  = P2^5;
sbit clk4 = P2^6;
sbit dat4  = P2^7;

code unsigned char p[8]={0,0,0xfe,0xff,0x33,0x33,0x3f,0x1e} ;
void delay(unsigned char n)
{
	while(n--);
}
void main()
{
	unsigned int i;
	while(1)
	{
   		for(dat1=0,i=0;i<8;i++)
			{
				led=p[i];
				clk1=0;
				delay(100);
				clk1=1;
				dat1=1;
			}
// 			for(dat2=0,i=0;i<8;i++)
// 			{
// 				led=p[i];
// 				clk2=0;
// 				delay(100);
// 		  	clk2=1;
// 				dat2=1;
// 			}
//  			for(dat3=0,i=0;i<8;i++)
//  			{
// 				led=p[i];
//  				clk3=0;
//  			  delay(10);
//  				clk3=1;
//  				dat3=1;
//     	}
//  			for(dat4=0,i=0;i<8;i++)
//  			{
// 				led=p[i];
//  				clk4=0;
//  			  delay(10);
//  				clk4=1;
//  				dat4=1;
// 			}
	}
}

