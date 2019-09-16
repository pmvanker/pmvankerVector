/* keypad .h*/
sbit R0 = P2^4;					//row
sbit R1 = P2^5;
sbit R2 = P2^6;
sbit R3 = P2^7;

sbit C0 = P2^0;					// collom
sbit C1 = P2^1;
sbit C2 = P2^2;
sbit C3 = P2^3;

code unsigned char keytable[4][4]={0,1,2,3,4,6,7,8,9,10,11,12,13,14,15,16};

bit colscan()
{
	return (C0&C1&C2&C3);
}

unsigned char keyscan()
{
		char row,col;
		R0=R1=R2=R3=0;
		C0=C1=C2=C3=1;
	
	while(colscan==1);	// waiting for key press event
	
	R0=0,R1=1,R2=1,R3=1;
	if(colscan()==0)
	{
		row = 0;
		goto colcheck;
	}
	
	R0=1,R1=0,R2=1,R3=1;
	if(colscan()==0)
	{
		row = 1;
		goto colcheck;
	}
	
	R0=1,R1=1,R2=0,R3=1;
	if(colscan()==0)
	{
		row = 2;
		goto colcheck;
	}
	
	R0=1,R1=1,R2=1,R3=0;
	if(colscan()==0)
	{
		row = 3;
		goto colcheck;
	}
	
	colcheck :
	
		if(C0 == 0)
		col = 0;
		else if(C1 == 0)
		col = 1;
		else if(C2 == 0)
		col = 2;
		else if(C3 == 0)
		col = 3;
	
		delay(10);				// key debouncing
		
		while(colscan()==0);
		return keytable[row][col];
}
																	

