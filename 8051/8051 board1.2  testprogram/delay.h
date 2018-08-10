/*void delay_1min(void)
{
	unsigned int i,c;
	for(c=4000;c>0;c--)
	{
		for(i=800;i>0;i--)
		{
		   if((sw&0x0f)!=0x0f)
		   {
		       flag=0;
			   return;
		   } 	
		}
	}
}	*/

/*void delay_2min(void)
{
	unsigned int i,c;
	for(c=4000;c>0;c--)
	{
		for(i=800;i>0;i--)
		{
		   if(!ir)
		   {
		   		flag1=1;
				return;	
		   }	
		}
	}
} */

void delay_ms(unsigned int i)
{
  unsigned int j;
  for(;i>0;i--)
  {
    for(j=125;j>0;j--);
  }
}	