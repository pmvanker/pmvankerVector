char ir_func(void)
{
/**VARIABLES DECLARATION**/
	char addr,cmd,mul; unsigned char i,bitCount;
	flag1=0;
 	addr=0x00,cmd=0x00;		//VARIABLES INITIALIZATION
	str_tx("Enter key on remote\r\n");
  	delay_2min();				//WAITING FOR INTERRUPT
 	if(flag1==1)
	{
		mul=0x10;				
	   	for(i=255;i>0;i--);  ////wait for first  three  bits
 		for(i=255;i>0;i--);  
  		for(i=255;i>0;i--);  
 		for(i=255;i>0;i--);  
 		for(i=255;i>0;i--);  
		for(i=255;i>0;i--);  
		for(i=25;i>0;i--);  
  		for(i=114;i>0;i--);  
	  	for(bitCount=0;bitCount<5;bitCount++)
  		{
  			for(i=255;i>0;i--); //capture bit  address  data  in pre defined time 
   			for(i=255;i>0;i--);  
    		for(i=255;i>0;i--);
			for(i=4;i>0;i--);
		   		 
			if(!ir)
	   				addr|=mul;
			mul/=2;
		}
	   	mul=0x20;

	    for(bitCount=0;bitCount<6;bitCount++)
		{
			for(i=255;i>0;i--);  //capture bit command  data  in pre defined time
			for(i=255;i>0;i--);  
		    for(i=255;i>0;i--); 
		    for(i=4;i>0;i--);
 
			if(!ir)
			  cmd|=mul;
			mul/=2;
   		}

		
		str_tx("cmd: ");
		CharTx((cmd/10)+48);
		CharTx((cmd%10)+48);
    	str_tx("\r\nAdd: ");
		CharTx((addr/10)+48);
		CharTx((addr%10)+48);	 
		str_tx("\r\n ");
	 	return 0;
	}
	else
		return 1;
	
}

