/*

*
**
***
****
*****
****
***
**
*

*/
#include<stdio.h>
main()
{
	int a,b;
	for(a=0;a<5;a++)
		{
			for(b=0;b<a;b++)
			printf("*");
		printf("\n");
		}
	for(a=5;a>0;a--)
		{
			for(b=a;b>0;b--)
			printf("*");
		printf("\n");
		}
}	
