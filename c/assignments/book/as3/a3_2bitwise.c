/* 3-8-2016  assignment 3 (2) 
	    wap to find number is positive (+)  or Negative (-)
*/
#include<stdio.h>
main()
{
	int  a;	
	printf("Enter The Data : ");
	scanf("%d",&a);
	a=a>>31;		//31 bit is signed bit so right shift it
	(a&&1)?printf("Negative\n"):printf("Positive\n");
}

