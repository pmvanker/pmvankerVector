sfr P2 = 0xA0;
sbit led = P2^0;
void delay(unsigned int);
int main()
{
		while(1)
		{
			led = ~led;
			delay(1000);
		}
}
void delay(unsigned int temp)
{
	unsigned char i;
	for(	;temp>0;temp--)
		{
			for(i=250;i>0;i--);
			for(i=247;i>0;i--);			
		}	
}
