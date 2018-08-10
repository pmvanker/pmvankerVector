#include <REGX51.H>

void delay(unsigned char);
void lcdcmd(unsigned char);
void lcddata(unsigned char);

sfr 	ldata = 0xA0; //P2=LCD data pins 
sbit	rs = P0^0;
sbit 	rw = P0^1;
sbit 	en = P0^2;

void main()
{
	lcdcmd(0x38);
	delay(100);
	lcdcmd(0x0e);
	delay(100);
	lcdcmd(0x01);
	delay(100);
	lcdcmd(0x06);
	delay(100);
	lcdcmd(0x86);
	delay(100);
	lcddata('p');
	delay(100);
	lcddata('r');
	delay(100);
	lcddata('a');
	delay(100);
	lcddata('f');
	delay(100);
	lcddata('u');
	delay(100);
	lcddata('l');
	delay(100);




	while(1);
	
}

void delay(unsigned char temp)
{
	unsigned char i;
	for(	;temp;temp--)
	{
		for(i=250;i>0;i--);
		for(i=247;i>0;i--);
	}					   
}
void lcdcmd(unsigned char value)
{
	ldata = value;   
	rs = 0;
	rw = 0;
	en = 1;  
	delay(10);       
	en = 0;
}

void lcddata(unsigned char value)
{ 
	ldata = value;   
	rs = 1;
	rw = 0;
	en = 1;       
	delay(10);
	en = 0;
}

