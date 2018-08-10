#include<reg51.h>

#define sw P0

sbit relay=P1^4;
sbit m1=P2^2;
sbit m2=P2^3;
			
bit flag;
unsigned char sw_test;
unsigned char i;

#include"lcd.h"
#include"serial.h"
#include"delay.h"
#include"adc.h"
#include"i2c.h"
#include"keypad.h"

unsigned int cnt1,cnt2;
bit flag1,flag2;

void int0(void) interrupt 0
{	 
	flag1=1;
}

void int1(void) interrupt 2
{
	flag2=1;
	cnt1++;
}
main()
{
	float res1=0,res2=0;
	unsigned char ch1,ch;
	P3=0xff;

	IE=0x85;
	SCON=0x50;
	TMOD=0x20;
	TH1=TL1=-3;
	TR1=1;
	P2=0x0F;
	while(1)
	{
		str_tx("\r\n\r\nSELECT A DEVICE FOR TESTING FROM THE MENU\r\n");
		str_tx("A: LED\r\n");
		str_tx("B: SWITCH\r\n");
		str_tx("C: KEYPAD\r\n");
		str_tx("D: LCD\r\n");
		str_tx("E: SEVEN SEGMENT DISPLAY\r\n");
		str_tx("F: SPI PROTOCOL(MCP3204)\r\n");
		str_tx("G: RELAY AND MOTOR\r\n");
		str_tx("H: I2C PROTOC0L(EEPROM)\r\n");
		str_tx("ANY OTHER KEY TO EXIT\r\n");
	  
		ch=CharRx();
	
		if((ch=='A')|(ch=='a'))
		{
			str_tx("\r\nLEDs Testing.............\r\n\r\n");
			str_tx("Ensure all DS0 switches are off\r\n");
			str_tx("Connect AL LEDs to P0.0 to P0.3 and AH LEDs to P0.4 to P0.7\r\n");
		l:	str_tx("\r\nThen enter any key to continue\r\n");
			CharRx();			
			P0=0xF0;
			str_tx("All LEDs Will be glowing\r\n\r\n");
			str_tx("If yes y/Y or no n/N\r\n\r\n");
			ch1=CharRx();
			if((ch1=='y')|(ch1=='Y'))
				continue;
			else if((ch1=='n')|(ch1=='N'))
			{
				str_tx("\r\nError possibilities\r\n");
				str_tx(" 1 : Cross check your connections\r\n");
				str_tx(" 2 : Ensure DS0 switches are in proper state or not loosly connected\r\n");
				str_tx(" 3 : Perform Continuity test for connectors or change connectors\r\n");
				str_tx(" 4 : LED may be damaged\r\n");
			}
			str_tx("\r\nEnter c/C for continue or e/E for exit\r\n\r\n");
			ch1=CharRx();
			if((ch1=='c')|(ch1=='C'))
				goto l;
			else
				continue;

		}
		else if((ch=='B')|(ch=='b'))
		{
			str_tx("\r\nAL(Active Low)Switches Testing......... \r\n");
			str_tx("Ensure DS0 switches are off\r\n");
			str_tx("Connect AL switches from P0.0 to P0.3\r\n");
			str_tx("Then enter any key to continue\r\n");
			CharRx();
			sw_test=sw;
			flag=1;
		s:	str_tx("\r\nPress the switch within 1 minute\r\n");
			delay_1min();
			if(flag)
			{
				str_tx("Have you pressed the switch\r\n");
				str_tx("If Yes y/Y or no n/N or any other key to exit\r\n");				
				ch1=CharRx();
				if((ch1=='y')|(ch1=='Y'))
					goto c;
				else if((ch1=='n')|(ch1=='N'))
					goto s;
				else
					continue;	
			}
			if((sw&0x0f)==0x0e)
				ch1=17;						
			else if((sw&0x0f)==0x0d)
				ch1=18;
			else if((sw&0x0f)==0x0b)
				ch1=19;
			else if((sw&0x0f)==0x07)
				ch1=20;
			while((sw&0x0f)!=0x0f);
			str_tx("\r\n");
			str_tx("Have you pressed sw");
			CharTx1(ch1/10+48);
			CharTx1(ch1%10+48);
			str_tx("\r\n");
			str_tx("If yes Y/y or no N/n or exit e/E\r\n");
			ch1=CharRx();
			if((ch1=='y')|(ch1=='Y'))
			{
				str_tx("Continue to Check other switches\r\n");
				str_tx("If yes Y/y or no N/n or exit e/E\r\n");
				ch1=CharRx();
				if((ch1=='y')|(ch1=='Y'))
					goto s;
				else
					continue;
			}
			else if((ch1=='n')|(ch1=='N'))
			{
	c:			str_tx("\r\nError possibilities\r\n");
				str_tx(" 1 : Cross check your connections\r\n");
				str_tx(" 2 : Ensure DS0 switches are in proper state or not loosly connected\r\n");
				str_tx(" 3 : Perform Continuity test for connectors or change connectors\r\n");
				str_tx(" 4 : Switches may be damaged\r\n");
			}
		}
		else if((ch=='C')|(ch=='c'))
		{
			str_tx("\r\nKEYPAD TESTING..........\r\n");
			str_tx("CONNECT KEYPAD C0 to R3 pinouts from  P2.0 to P2.7 and Ensure all DS2 switches are off\r\n");
			str_tx("ENTER ANY TO CONTINUE\r\n");
			CharRx();
	k:		str_tx("Enter key on keypad\r\n");

			ch1=keyscan();
			str_tx("Have you pressed sw");

			CharTx1(ch1/10+48);
			CharTx1(ch1%10+48);
			str_tx("\r\n");
			str_tx("If yes Y/y or no N/n or exit e/E\r\n");
			ch1=CharRx();
			if((ch1=='y')|(ch1=='Y'))
			{
				str_tx("Continue to Check other keys\r\n");
				goto k;
			}
			else if((ch1=='n')|(ch1=='N'))
			{
					str_tx("\n\rError possibilities\r\n");
					str_tx(" 1 : Cross check your connections\r\n");
					str_tx(" 2 : Ensure DS2 switches are in proper state or not loosly connected\r\n");
					str_tx(" 3 : Perform Continuity test for connectors or change connectors\r\n");
					str_tx(" 4 : Switches may be damaged\r\n");
			}
			else
				continue;
		}
		else if((ch=='D')|(ch=='d'))
		{
			str_tx("\r\nLCD Testing........... \r\n");
			str_tx("Make sure no connectors are connected to P0 and P2\r\n");
			str_tx("Ensure DS0 are on for DATA LINES connected from P0.4 TO P0.7 AND DS3 switches on for CONTROL SIGNALS P3.4 TO P3.6)\n");
			str_tx("Then enter any key to continue\r\n");
			CharRx();
			init_lcd();
			cmd_lcd(0x80);
			str_lcd("    VECTOR   ");
			cmd_lcd(0xC0);
			str_lcd("EMBEDDED INSTITUTE");
			str_tx("If Viewing display on LCD \r\n");
			str_tx("Then Y/y for Yes or N/n for No from keyboard\r\n");
			ch=CharRx();
			if((ch=='Y')|(ch=='y'))
				continue;
			else
			{
					str_tx("\n\rError possibilities\r\n");
					str_tx(" 1 : Ensure DS2 switches are in proper state or not loosly connected\r\n");
					str_tx(" 2 : LCD may be damaged\r\n");	
			}
				
		}
		else if((ch=='E')|(ch=='e'))
		{
			str_tx("\r\nSeven segment display Testing......... \r\n");
			str_tx("Ensure DS0 and DS2 switches are turned off\r\n");
			str_tx("Connect Seven segment selection pins to P0.0 to P0.3\r\n");
			str_tx("segment data pins to P2 then enter any key to continue....\r\n");
			CharRx();
			P0=0x00;					 										 
			P2=0x00;
			str_tx("If Your Viewing display on 7-segment\r\n");
			str_tx("Y/y for YES or N/n for NO from keyboard\r\n");
			ch=CharRx();
			if((ch=='Y')|(ch=='y'))
			{
			}
			else
			{
					str_tx("\n\rError possibilities\r\n");
					str_tx(" 1 : Cross check your connections\r\n");
					str_tx(" 2 : Ensure DS0 and DS2 switches are in proper state or not loosly connected\r\n");
					str_tx(" 3 : Perform Continuity test for connectors or change connectors\r\n");
					str_tx(" 4 : LEDs may be damaged\r\n");
			}
		} 
		else if((ch=='F')|(ch=='f'))
		{
			str_tx("\r\nMCP3204 Testing....... \r\n");
			str_tx("Ensure No connectors are connected to P1 and DS1 switches are on\r\n");
			str_tx("Apply ground to MCP3204 CH0(channel 0)then enter a key to continue\r\n");
			CharRx();
			res1=adc_read(0,0);
			str_tx("Apply vcc  to MCP3204 CH0(channel 0)then enter a key to continue\r\n");
			CharRx();
			res2=adc_read(0,0);
			if((res1<1)&&(res2>4.9))
			{
				str_tx("MCP3204 is Ok \r\n");
				continue;
			}
			else
			{
					str_tx("\n\rError possibilities\r\n");
					str_tx(" 1 : Ensure DS1 switches are in proper state or not loosly connected\r\n");
					str_tx(" 2 : MCP3204 may be damaged\r\n");	
			}
		}
				
		else if((ch=='G')|(ch=='g'))
		{
			str_tx("\r\nRelay and motor Testing \r\n");
			str_tx("Ensure fourth switch in DS1 is on\r\n");
			str_tx("Connect motor to P2.2 and P2.3 then enter any key to continue\r\n");
			CharRx();
		r:	str_tx("Enter 1 for rotating the motor in forward direction\r\n");
			str_tx("Enter 2 for rotating the motor in reverse direction\r\n");
			str_tx("Enter any other key to exit\r\n");
			
			ch1=CharRx();
			if(ch1=='1')
			{
				relay=0;
				str_tx("Relay is off\r\n");
				m1=0;  
				m2=1;
				goto r;
			}
			if(ch=='2')
			{
				relay=1;
				str_tx("Relay is on\r\n");
				m1=1;
				m2=0;
				goto r;
			}
		}
		else if((ch=='H')|(ch=='h'))
		{
			str_tx("\r\nI2C Testing \r\n");
			str_tx("Ensure no connectors are connected to P2 and DS2 switches are on\r\n");
			str_tx("Then enter any key to continue\r\n");
			CharRx();
			i2c_test();
		}
		else 
			return;	
	}
}
