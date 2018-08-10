#include<stdio.h>
int fact(int);

int main()
{
	int n;
	printf("enter num\n");
	scanf("%d",&n);

	printf("fact num :%d\n",fact(n));
}

int fact(int n)
{
	if(n)
	return n*fact(n-1);
	else
	return 1;
}
