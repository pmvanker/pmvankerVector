#include<stdio.h>
int fact(int);
int main()
{
	int num;
	printf("enter the num....\n");
	scanf("%d",&num);
	printf("Factorial of %d = %d\n",num,fact(num));
}

int fact(int n)
{
	if(n)
	{
	n=n*fact(n-1);
	return n;
	}
	else
	return 1;
}
