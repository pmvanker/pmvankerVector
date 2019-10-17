#include<stdio.h>

void b2dfun(int);
main()
{
	int num;

	printf("Enter the number");
	scanf("%d",&num);

	b2dfun(num);
	printf("\n");
}

void b2dfun(int n)
{
int i;
	for(i=31;i>=0;i--)
	printf("%d",n>>i&1);
}
