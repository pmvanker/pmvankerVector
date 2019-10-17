sfr LEDs = 0xA0;												// leds is port 2
void delay(unsigned int);								// 1ms delay subroutine
int main()															// main program
{
		unsigned char k;										// temp var
		while(1)														// infinite loop
		{
			LEDs = 0xEF;											// initilization with 01
			for(k=0;k<4;k++)									// 8 time loop ( 4 time in DvpBrd)
			{
			//	delay(1000);										// 1sec delay		
				LEDs = LEDs << 1; 
			}
			LEDs = 0xEF;
			for(k=0;k<4;k++)
			{
		//		delay(500);											// 500 mini sec delay
				LEDs = LEDs << 1; 
			}
			LEDs = 0xEF;
			for(k=0;k<4;k++)
			{
			//	delay(100);											// 100 mini sec delay
				LEDs = LEDs << 1; 
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
