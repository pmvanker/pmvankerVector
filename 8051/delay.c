#include <REGX51.H>
void delay(unsigned char temp)
{
 unsigned char i;
 for(temp=temp;temp>0;temp--)
 {
  for(i=250;i>0;i--);
  for(i=247;i>0;i--);
 }
}

void main()
{
delay(1);
while(1);
}