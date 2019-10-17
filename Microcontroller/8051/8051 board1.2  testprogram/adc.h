sbit clk=P1^0;
sbit miso=P1^1;
sbit mosi=P1^2;
sbit _cs=P1^3;

float adc_read(bit d1,bit d0)
{
  unsigned int adc_val=0;
  char i; 
  delay_ms(1000);
  clk=mosi=1;//start condition for 3204

  _cs=0;

  clk=0;clk=1;//in mcp3201 that extra clock pulse not required
  clk=0;mosi=1;clk=1;// used for single mode not differential mode
  clk=0;mosi=1;clk=1; //d2  which is dont care/used in mcp3208
  clk=0;mosi=d1;clk=1;//d1  channel selection bit 
  clk=0;mosi=d0;clk=1;//d0  channel selection bit     
                   //           
  clk=0;clk=1;       //start sampling the analog input
  clk=0;clk=1;       //extra clk for null bit
  for(i=11;i>=0;i--) //for receiving 12 bit information
  {
	clk=0;
    if(miso)
    {
      adc_val|=(1<<i);
    }
    clk=1;
  }
   _cs=1;
  return ((adc_val*5.0)/4095);
}

 
