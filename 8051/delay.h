#ifndef __delay_H__
#define __delay_H__
void delay(unsigned char temp)
{
 unsigned char i;
 for(temp=temp;temp>0;temp--)
 {
  for(i=250;i>0;i--);
  for(i=247;i>0;i--);
 }
}
#endif
