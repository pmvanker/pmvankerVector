/*
Write a one line code to compare two numbers equal or not using bitwise operators.
*/
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the First no :");
	scanf("%d",&a);
	printf("Enter the Second no :");
	scanf("%d",&b);
	a^b?printf("not Eqaual\n"):printf("Equal\n");
}
