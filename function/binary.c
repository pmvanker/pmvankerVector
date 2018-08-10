#include<stdio.h>
void binary(int);
int main()
{
	printf("enter number\n");
	int i;
	scanf("%d",&i);

	binary(i);
}
void binary(int x)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d",(x>>i)&1);
	printf("\n");
}
