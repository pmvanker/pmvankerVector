void lcdcmd(unsigned char value)
{
	ldata = value;   	//put the value on the pins
	rs = 0;
	rw = 0;
	en = 1;          	//strobe the enable pin
	delay(1);       
	en = 0;
return;
}
void lcddata(unsigned char value)
{ 
	ldata = value;   	//put the value on the pins
	rs = 1;
	rw = 0;
	en = 1;          	//strobe the enable pin
	delay(1);
	en = 0;
return;
}



