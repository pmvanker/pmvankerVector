#include <REGX51.H>
#include"delay.h"
#include"7seg.h"
void main()
{
	unsigned char a,i;
	while(1)
	{
		for(a=0;a<99;a++)
		{
			for(i=0;i<100;i++)
			{
			display2seg(a);
			delay(2);
			}
		}		
	}
}