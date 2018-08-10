sfr SEG = 0x80;
sbit S1 = P1^0;
sbit S2 = P1^1;
code unsigned char s[10]={0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};
void display2seg(int n)
{
	SEG = s[n/10];
	S1 = 0;
	delay(2);
	S1 = 1;
	
	SEG = s[n%10];
	S2 = 0;
	delay(2);
	S2 = 1;	
}