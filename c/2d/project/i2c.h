sbit SDA = P2^0;
sbit SCL = P2^1;

void i2c_start()
{
	SCL = 1;
	SDA = 1;
	SDA = 0;	
}
void i2c_stop()
{
	SCL = 0;
	SDA = 0;
	SCL = 1;
	SDA = 1;	
}

i2c_write(unsigned char _data)
{
	signed char i;
	for(i=7;i>=0;i--)
	{
		SCL = 0;	
		SDA = (_data & (1<<i))?1:0;
		SCL = 1;		
	}
}

unsigned char i2c_read()
{
	unsigned char temp = 0;
	signed char i;
	for(i=7;i>=0;i--)
	{
		SCL = 1;
		if(SDA==1)
			temp |= (1<<i);
		SCL =0;		
	}
	return temp;
}

void i2c_ack()
{
	int i=0;
	SCL = 0;
	SDA = 1;
	SCL = 1;
	for(i=0;i<1000;i++)
	{
	 if(SDA==1)
	 continue;
	 else
	 break;
	}
	SCL = 0;	
}

void i2c_noack()
{
	SCL = 0;
	SDA = 1;
	SCL = 1;	
}

void i2c_device_write(unsigned char sa,unsigned char mr,unsigned char d)
{
 	i2c_start();
	i2c_write(sa);
	i2c_ack();
	i2c_write(mr);
	i2c_ack();
	i2c_write(d);
	i2c_ack();
	i2c_stop();
	delay(10); 
}

unsigned char i2c_device_read(unsigned char sa,unsigned char mr)
{
	unsigned char temp;
	i2c_start();
	i2c_write(sa);
	i2c_ack();
	i2c_write(mr);
	i2c_ack();
	i2c_start();
	i2c_write(sa|1);
	i2c_ack();
	temp = i2c_read();
	i2c_noack();
	i2c_stop();
	return temp;
}
