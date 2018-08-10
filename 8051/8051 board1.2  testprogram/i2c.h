/**VARIABLES DEFINITION**/
#define DELAY _nop_();             
#define CLKHIGH scl=1;//while(clk!=1);  
#define CLKLOW  scl=0;                
#define DATAHIGH sda=1;              
#define DATALOW sda=0; 

/**I2C CONNECTION**/
sbit sda=P2^0;  
sbit scl=P2^1; 

/**I2C FUNCTIONS DECLARATION**/
void stop(void); 
void address(unsigned char); 
void send_byte(unsigned char); 
unsigned char receive_byte(unsigned char); 
void write_i2c(unsigned char,unsigned char,unsigned char); 
unsigned char read_i2c(unsigned char,unsigned char);

/**VARIABLES DECLARATION**/
bit flag = 0;
unsigned char mask;

/**MAIN FUNCTION**/
void i2c_test(unsigned char add)
{	 
	unsigned char ch;

	write_i2c(add,0x02,0x05);
	ch=read_i2c(add,0x02);
	if(ch==0x05)
		str_tx("I2C PROTOCOL OK\r\n");	//DISPLAY STRING FUNCTION
	else
	{
			error2();
			str_tx("4:IC may be damaged\r\n");	
	}
} 

/**I2C STOP FUNCTION**/
void stop(void) 
{
	DATALOW      
	CLKHIGH       
	DELAY
	DATAHIGH    
	DELAY
}

/**I2C ADDRESS FUNCTION**/
void address(unsigned char sel_eeprom) 
{
	DATALOW         //ISSUING START CONDITION FOR I2C
	DELAY
	CLKLOW
	DELAY
	send_byte(sel_eeprom); 
}

/**I2C SEND BYTE FUNCTION**/
void send_byte(unsigned char c)
{
	mask=0x80;
    do                 
	  {
	    if(c&mask)       
	      DATAHIGH
	    else
	     DATALOW
	    CLKHIGH        
	    CLKLOW          
	    mask/=2;     
	  }while(mask>0);
	DATAHIGH          
	CLKHIGH            
	CLKLOW
}

/**I2C RECEIVE BYTE FUNCTION**/
unsigned char receive_byte(unsigned char c) 
{
	unsigned char temp=0; 
	mask=0x80;
	  do              
	  {
	     CLKHIGH    
	     DELAY
	     if(sda==1)
	       temp|=mask;   
	     CLKLOW         
	     DELAY
	     mask/=2;        
	  }while(mask>0);
	  if(c==1) 
	     DATAHIGH      
	  else
	     DATALOW        
	CLKHIGH            
	DELAY
	CLKLOW             
	DELAY 
	DATAHIGH          
	return temp;
}

/**I2C WRITE FUNCTION**/
void write_i2c(unsigned char sel_eeprom,unsigned char eeprom_addr,unsigned char c)
{
	int i;
	address(sel_eeprom); 
	send_byte(eeprom_addr);  
	send_byte(c);             
	stop();
	for(i=0;i<1800;i++);
}

/**I2C READ FUNCTION**/
unsigned char read_i2c(unsigned char sel_eeprom,unsigned char eeprom_addr)
{
	unsigned char c;
	address(sel_eeprom);   
	send_byte(eeprom_addr);  
	stop();
	address(sel_eeprom+1);
	c=receive_byte(1);       
	stop();
	return c;
}





