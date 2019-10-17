sfr LEDs = 0xA0;					// leds is port 2
void delay(unsigned int);			// 1ms delay subroutine
void main()							// main program
{
	unsigned char i,j;
	while(1)
	{
		j = 0x0f;
		for(i=0;i<8;i++)
		{
			 LEDs = j ^ (1<<i) ;
	   	     delay(1000);
		}
/*
			1>  00001111   
				  00000001		=	00001110	
		
			2>	00001111	
					00000010		= 00001101
		
			3>	00001111
					00000100		=	00001011
		
			4>	00001111
					00001000		=	00000111
			
			5>	00001111
					00010000		=	00011111
			
			6>	00001111
					00100000		=	00101111
			
			7>	00001111
					01000000		=	01001111
			
			8>	00001111
					10000000		=	10001111
*/
		j = 0x0f;
	 	for(i=0;i<8;i++)
		{
			 LEDs = j ^ (1<<i) ;
	   	     delay(500);
		}
		j = 0x0f;
		for(i=0;i<8;i++)
		{
			 LEDs = j ^ (1<<i) ;
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
