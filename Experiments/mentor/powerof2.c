#include<stdio.h>

int powerof2(int n)
{
	return n & (n-1);
}
int main()
{
	int n;
	printf("enter value \n");
	scanf("%d",&n);

	powerof2(n)==0?printf("powerof2\n"):printf("not power of 2");
}
