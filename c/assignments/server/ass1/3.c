/*Negative Positive using bitwise op*/
#include<stdio.h>
main()
{
	int num;
	printf("Enter the Number :");
	scanf("%d",&num);
	(num>>31)&1?printf("Negative\n"):printf("Positive\n");
}
