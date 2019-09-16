/*Swaping 2 num using Bitwise op*/
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter 1st num :");
	scanf("%d",&a);
	printf("Enter 2nd num :");
	scanf("%d",&b);
	printf("a=%d b=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	
	printf("a=%d b=%d\n",a,b);
}

