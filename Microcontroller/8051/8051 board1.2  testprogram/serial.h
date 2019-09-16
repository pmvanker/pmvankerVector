unsigned char CharRx(void)
{
	unsigned char ch=0;
	while(!RI);
	ch=SBUF;
	RI=0;
	return(ch);
}
	
void CharTx(unsigned char ch)
{
	SBUF=ch;
	while(!TI);
	TI=0;
}	  

void str_tx(unsigned char *p)
{
	while(*p)
		CharTx(*p++);
}