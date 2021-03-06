#include<reg51.h>
#include<intrins.h>

#define sw P0		 
sbit relay=P1^4;
sbit m1=P2^2;
sbit m2=P2^3;
			
bit flag;

#include"delay.h"
//#include"lcd.h"
#include"serial.h"

void error2(void)
{
		str_tx("\n\rError possibilities\r\n");
		str_tx("Ensure DS switches are in proper state or not loosly connected\r\n");
}

#include"adc.h"
#include"i2c.h"
#include"keypad.h"
#include"glcd.h"
#include"ir.h"

void error1(void)
{
		str_tx("\r\nError possibilities\r\n");
		str_tx("Cross check your connections\r\n");
		str_tx("Ensure DS switches are in proper state or not loosly connected\r\n");
		str_tx("Perform Continuity test for connectors or change connectors\r\n");
}

main()
{
	float res1=0,res2=0;
	unsigned char ch1,ch;

	SCON=0x50;
	TMOD=0x20;
	TH1=TL1=-3;
	TR1=1;
	while(1)
	{
		str_tx("\r\nSELECT A DEVICE FOR TESTING FROM THE MENU\r\n\r\n");
		str_tx("A/a:LED\r\n");
		str_tx("B/b:SWITCH\r\n");
		str_tx("C/c:KEYPAD\r\n");
//		str_tx("D/d:LCD\r\n");
		str_tx("E/e:7 SEGMENTS\r\n");
		str_tx("F/f:GLCD \r\n");
		str_tx("G/g:IR\r\n");
		str_tx("H/h:SPI\r\n");
		str_tx("I/i:RELAY AND MOTOR\r\n");
		str_tx("J/j:I2C\r\n");
		str_tx("ANY OTHER KEY TO EXIT\r\n");
	  	ch=CharRx();
	
		if((ch=='A')|(ch=='a'))
		{
			str_tx("\r\nLEDs Testing\r\n");
			P0=0x0F;
			str_tx("Ensure all DS0 switches are off\r\n");
			str_tx("Connect AL LEDs to P0.0 to P0.3 and AH LEDs to P0.4 to P0.7\r\n");
		l:	str_tx("Enter to continue\r\n");
			CharRx();			
			P0=0xF0;
			str_tx("All LEDs Will be glowing\r\n");
			str_tx("If yes y/Y or no n/N\r\n");
			ch1=CharRx();
			if((ch1=='y')|(ch1=='Y'))
				continue;
			else if((ch1=='n')|(ch1=='N'))
			{
				error1();
				str_tx("LEDs may be damaged\r\n");
		 	}
			str_tx("\r\nEnter c/C : continue or e/E : exit\r\n");
			ch1=CharRx();
			if((ch1=='c')|(ch1=='C'))
				goto l;
			else
				continue;

		}
		else if((ch=='B')|(ch=='b'))
		{
			str_tx("\r\nActive Low Switches Testing\r\n");
			str_tx("Connect AL switches from P0.0 to P0.3 and Ensure DS0 switches off\r\n");
	s:		str_tx("Enter to continue\r\n");
			CharRx();
			flag=1;
			str_tx("\r\nPress switch in 1 minute\r\n");
			delay_1min();
			if(flag)
			{
				str_tx("Have you pressed switch\r\n");
				str_tx("If Yes y/Y or no n/N\r\n");				
				ch1=CharRx();
				if((ch1=='y')|(ch1=='Y'))
					goto c;
				else if((ch1=='n')|(ch1=='N'))
					goto s;
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
			CharTx(ch1/10+48);
			CharTx(ch1%10+48);
			str_tx("\r\n");
			str_tx("If yes Y/y or no N/n\r\n");
			ch1=CharRx();
			if((ch1=='y')|(ch1=='Y'))
			{
				str_tx("Continue to Check other switches\r\n");
				str_tx("If yes Y/y\r\n");
				ch1=CharRx();
				if((ch1=='y')|(ch1=='Y'))
					goto s;
			}
			else if((ch1=='n')|(ch1=='N'))
			{
	c:			error1();
				str_tx("Switches may be damaged\r\n");
				str_tx("Continue to Check  switches\r\n");
				str_tx("If yes Y/y or no N/n or exit e/E\r\n");
				ch1=CharRx();
				if((ch1=='y')|(ch1=='Y'))
					goto s;
			}
		}
		else if((ch=='C')|(ch=='c'))
		{
			str_tx("\r\nKEYPAD TESTING\r\n");
			str_tx("CONNECT KEYPAD C0 to R3 pinouts from  P2.0 to P2.7 and Ensure all DS2 switches are off\r\n");
			str_tx("ENTER TO CONTINUE\r\n");
			CharRx();
	k:		str_tx("Enter key on keypad\r\n");

			ch1=keyscan();
			str_tx("Have you pressed sw");

			CharTx(ch1/10+48);
			CharTx(ch1%10+48);
			str_tx("\r\n");
			str_tx("If yes Y/y or no N/n or exit e/E\r\n");
			ch1=CharRx();
			if((ch1=='y')|(ch1=='Y'))
			{
				str_tx("Continue to Check other keys\r\n");
				str_tx("Yes  y/Y or No n/N\r\n");
				ch1=CharRx();
				if((ch1=='y')|(ch1=='Y'))
					goto k;

			}
			else if((ch1=='n')|(ch1=='N'))
			{
					error1();
					str_tx("Switches may be damaged\r\n");
					str_tx("\r\nEnter c/C for continue or e/E for exit\r\n");
					ch1=CharRx();
					if((ch1=='c')|(ch1=='C'))
						goto k;
		
			}
			else
				continue;
		}
/*		else if((ch=='D')|(ch=='d'))
		{
			str_tx("\r\nLCD Testing\r\n");
			str_tx("Make sure no connectors are connected to P0 and P2\r\n");
			str_tx("Ensure DS0 are on for DATA LINES(P0.4 TO P0.7) AND DS3 switches on for CONTROL SIGNALS(P3.4 TO P3.6)\r\n");
	v:		str_tx("Then enter to continue\r\n");
			CharRx();
			init_lcd();
			cmd_lcd(0x80);
			str_lcd("    VECTOR   ");
			cmd_lcd(0xC0);
			str_lcd("EMBEDDED INSTITUTE");
			str_tx("If Viewing display on LCD \r\n");
			str_tx("Then Y/y for Yes or N/n for No\r\n");
			ch=CharRx();
			if((ch=='Y')|(ch=='y'))
				continue;
			else
			{
					error2();
					str_tx("Check LCD contrast and 2 way switch is LCD side\r\n");	
					str_tx("LCD may be damaged\r\n");	
					str_tx("\r\nEnter c/C for continue or e/E for exit\r\n");
					ch1=CharRx();
					if((ch1=='c')|(ch1=='C'))
						goto v;
		

			}
				
		}
	*/
		else if((ch=='E')|(ch=='e'))
		{
			str_tx("\r\nSeven segment display Testing\r\n");
			str_tx("Ensure DS0 and DS2 switches are turned off\r\n");
			str_tx("Connect Seven segment selection pins to P0.0 to P0.3 and data pins to P2\r\n");
	d:		str_tx("then enter to continue\r\n");
			CharRx();
			P0=0x00;					 										 
			P2=0x00;			
			str_tx("If Your Viewing display on 7-segment\r\n");
			str_tx("Y/y for YES or N/n for NO from keyboard\r\n");
			ch=CharRx();
			if((ch=='Y')|(ch=='y'))
				str_tx("Seven segment is ok\r\n");
			else
			{
					error1();
					str_tx("LEDs may be damaged\r\n");
					str_tx("\r\nEnter c/C : continue or e/E : exit\r\n");
					ch1=CharRx();
					if((ch1=='c')|(ch1=='C'))
						goto d;
		
			}
		}
		else if((ch=='F')|(ch=='f'))
		{
			str_tx("\r\nGLCD Testing\r\n");
			str_tx("Make sure no connectors are connected to P0,P2 and P3\r\n");
			str_tx("Ensure DS0,DS2 AND DS3 switches on\r\n");
	g:		str_tx("Then enter to continue\r\n");
			CharRx();
			display();
			str_tx("If Viewing display on LCD \r\n");
			str_tx("Then Y/y for Yes or N/n for No\r\n");
			ch=CharRx();
			if((ch=='Y')|(ch=='y'))
				continue;
			else
			{
					error2();
					str_tx("Check GLCD contrast and 2 way switch is GLCD side\r\n");	
					str_tx("GLCD may be damaged\r\n");	
					str_tx("\r\nEnter c/C for continue or e/E for exit\r\n");
					ch1=CharRx();
					if((ch1=='c')|(ch1=='C'))
						goto g;
		
			}
				
		} 

		
		else if((ch=='G')|(ch=='g'))
		{
			str_tx("\r\nIR Testing\r\n");
			str_tx("Ensure No connectors are connected to P3 and DS3 switches are on\r\n");
			str_tx("\r\nThen enter to continue\r\n");
	   		CharRx();
			ch1=ir_func();
			if(ch1==1)
			{
				error2();
				str_tx("IR may be damaged\r\n");
			}
		}
	  	else if((ch=='H')|(ch=='h'))
		{
			str_tx("\r\nMCP3204 Testing\r\n");
			str_tx("Ensure No connectors are connected to P1 and DS1 switches are on\r\n");
	m:		str_tx("Apply ground to MCP3204 CH3");
			str_tx("\r\nThen enter to continue\r\n");
			CharRx();
			res1=adc_read(1,1);
			str_tx("Apply vcc  to MCP3204 CH3");
			str_tx("\r\nThen enter to continue\r\n");
			CharRx();
			res2=adc_read(1,1);
			
			if((res1<1)&&(res2>4.9))
			{
				str_tx("MCP3204 is Ok \r\n");
				str_tx("\r\n");
			}
			else
			{
					error2();
					str_tx("MCP3204 may be damaged\r\n");
					str_tx("\r\nEnter c/C for continue or e/E for exit\r\n");
					ch1=CharRx();
					if((ch1=='c')|(ch1=='C'))
						goto m;
				
			}
		}
				
		else if((ch=='I')|(ch=='i'))
		{
			str_tx("\r\nRelay and Motor Testing\r\n");
			str_tx("Ensure fourth switch in DS1 is on\r\n");
			str_tx("Connect motor to P2.2 and P2.3 then enter any key to continue\r\n");
			CharRx();
		r:	str_tx("Enter 1 for rotating the motor in forward direction\r\n");
			str_tx("Enter 2 for rotating the motor in reverse direction\r\n");
			str_tx("Enter other key to exit\r\n");
			
			ch1=CharRx();
			if(ch1=='1')
			{
				relay=0;
				str_tx("Relay is off\r\n");
				m1=0;  
				m2=1;
				goto r;
			}
			else if(ch=='2')
			{
				relay=1;
				str_tx("Relay is on\r\n");
				m1=1;
				m2=0;
				goto r;
			}
		}
		else if((ch=='J')|(ch=='j'))
		{
			str_tx("\r\nI2C Testing\r\n");
			str_tx("Ensure no connectors are connected to P2 and DS2 switches are on\r\n");
			str_tx("Then select the device\r\n");
			str_tx("R: RTC or E: EEPROM\r\n");
			ch1=CharRx();
			if((ch1=='R')|(ch1=='r'))
				i2c_test(0xd0);
			else
				i2c_test(0xa0);
				
		}
		else 
			return;	
	}
}


