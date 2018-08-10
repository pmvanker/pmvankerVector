void uart_init()
{
	SCON= 0x50;							// serial mode 1 Asyncronous chng Boadrate
	TMOD = 0x20;						// timer 1 mode 2 8bit autorelaod mode
	TH1=TL1=-3;							// selcting Boadrate 9600bps
	TR1 = 1;								// start timer 1
}
void uart_tx(unsigned char ch)
{
	SBUF = ch;
	while(TI==0);
	TI = 0;	
}
unsigned char uart_rx()
{
	while(RI==0);
	RI=0;
	return SBUF;
}
void uart_tx_string(char *p)
{
	while(*p)
  uart_tx(*p++);		
}