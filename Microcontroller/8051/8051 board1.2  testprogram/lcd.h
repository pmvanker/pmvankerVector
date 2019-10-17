#define lcd P0
sbit RS=P3^4;
sbit RW=P3^5;
sbit EN=P3^6;      
void init_lcd(void);
void cmd_lcd(unsigned char);
void data_lcd(unsigned char);
unsigned char data4m_lcd(void);
void str_lcd(char *);
 
void init_lcd()
{
	cmd_lcd(0x02);			//4-bit mode
	cmd_lcd(0x28);	
	cmd_lcd(0x80);			//starting pos of 1st line
	cmd_lcd(0x01);			//clear screen
	cmd_lcd(0x0C);			
    cmd_lcd(0x06);
}
void write_lcd(unsigned char ch)
{
	RW=0;
	lcd=(ch & 0xf0);
	EN=1;
	delay_ms(2);
	EN=0;

	lcd=(ch<<4);
	EN=1;
	delay_ms(2);
	EN=0;

}

void cmd_lcd(unsigned char ch)
{
	RS=0;	  
	write_lcd(ch);
}

void data_lcd(unsigned char ch)
{
	RS=1;
	write_lcd(ch);	
}
void str_lcd(char *p)
{
	while(*p)
		data_lcd(*p++);
	
}
