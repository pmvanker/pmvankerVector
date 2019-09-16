#include<stdio.h>
main()
{
	int i,j,k,num;
	
	for(i=0;i<5;i++)
	{
		for(j=5;j>i;j--)
                   {
			printf("-");
		   }
		for(j=0;j<i+1;j+2) 
                   {
			printf("*");
		   }  
	printf("\n");
	}
}
