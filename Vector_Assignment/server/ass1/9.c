/*
Write a program to reverse the bits of a given number.

Note : not just reverse printing.
*/
#include<stdio.h>
main()
{
	int num,s=0;
	printf("Enter the num :");
	scanf("%d",&num);
	printf("%d\n",num);
	while(num)
	{
		s=s*10+(num%10);
		num/=10;	
	}
	printf("%d\n",s);
}

