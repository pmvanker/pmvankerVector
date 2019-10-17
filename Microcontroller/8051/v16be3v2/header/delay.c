void delay(unsigned int temp)
{
	unsigned char i;
	for(	;temp;temp--)
	{
		for(i=250;i>0;i--);
		for(i=247;i>0;i--);
	}					   
}
