/*Even odd using bitwise op*/
#include<stdio.h>
main()
{
	int num;
	printf("Enter the Number :");
	scanf("%d",&num);
	num&1?printf("Even\n"):printf("Odd\n");
}
