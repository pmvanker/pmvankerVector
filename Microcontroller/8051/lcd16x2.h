#ifndef __lcd16x2_H__
#define __lcd16x2_H__
sfr ldata = 0xA0;					//P1 lcd data connection
sbit rs = P0^0;
sbit rw	= P0^1;
sbit en = P0^2;
void lcddata(unsigned char ch)
{
 ldata=ch;
 rs=1;
 rw=0;
 en=1;
 delay(1);
 en=0;
}
void lcdcmd(unsigned char ch)
{
 ldata=ch;
 rs=0;
 rw=0;
 en=1;
 delay(1);
 en=0;
}
#endif
