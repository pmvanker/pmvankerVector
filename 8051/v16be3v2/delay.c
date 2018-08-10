void delay_ms(unsigned int temp)
{
	unsigned char i;
	for(	;	temp > 0	;	temp--)
	{
		for(i=255;i>0;i--);
		for(i=247;i>0;i--);
	}					   
}	 