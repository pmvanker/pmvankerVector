/* 1 ms delay header file */
#ifndef __delay_ms_H__
#define __delay_ms_H__
void delay_ms(unsigned int temp)
{
	unsigned char i;
	for(	;	temp > 0	;	temp--)
	{
		for(i=255;i>0;i--);
		for(i=247;i>0;i--);
	}					   
}
#endif
