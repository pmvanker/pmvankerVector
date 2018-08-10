sfr LEDs = 0xA0;					// leds is port 2
void delay(unsigned int);			// 1ms delay subroutine
int main()							// main program
{
		code unsigned char a[8]={0xf1,0xf2,0xf4,0xf8,0xe0,0xd0,0xb0,0x70}; // blink data
		unsigned char k;			// temp var
		LEDs = 0xf0;
		while(1)														// infinite loop
		{
			for(k=0;k<8;k++)
			{
				LEDs = a[k];
				delay(1000);
			}
			for(k=0;k<8;k++)
			{
				LEDs = a[k];
				delay(500);
			}
			for(k=0;k<8;k++)
			{
				LEDs = a[k];
				delay(100);
			}
			 
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
