/*Divisible by 8 or not */
#include<stdio.h>
main()
{
	int num;
	printf("Enter the num...");
	scanf("%d",&num);
//	num%8?printf("not divisable\n"):printf("Divisable\n"); //cause bitwise
	
	num&7?printf("not divisable\n"):printf("Divisable\n"); //cause bitwise
}
