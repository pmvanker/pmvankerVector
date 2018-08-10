/*	----*      
	---**    
	--***
	-****
        *****
*/
#include<stdio.h>
main()
{
	int x,y,s;
	for(x=0;x<=5;x++)
	{
		for(s=5-x;s>0;s--)
		printf(" ");
		for(y=0;y<x;y++)
		printf("*");	
	printf("\n");
	}

}
