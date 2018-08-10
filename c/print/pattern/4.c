/*
    *
   * *
  * * *
 * * * *
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/
#include<stdio.h>
main()
{
int i,j;
	for(j=0;j<5;j++)
	{
		for(i=j;i<4;i++)
		{
		printf(" ");
		}
		
		for(i=j;i>0;i--)
		{
		printf(" *");
		}
	printf("\n");
	}
	for(j=0;j<5;j++)
	{
		for(i=j;i>0;i--)
		{
		printf(" ");
		}
		
		for(i=j;i<5;i++)
		{
		printf("* ");
		}
	printf("\n");
	}
}
