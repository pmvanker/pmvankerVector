#include<stdio.h>
void printb(int);
main()
{
	int num;
	printf("Enter the num\n");
	scanf("%d",&num);
	printb(num);
	printf("set 4th bit\n");

	num=num | 1 << 4;//////////////////////////////////////////////////

	printb(num);
	printf("clear 4th bit\n");

	num=num & ~(1 << 4);/////////////////////////////////////////////////

	printb(num);
	printf("compliment a bit\n");

	num= num ^ 1 << 4; ////////////////////////////////////////////////

	printb(num);
}


void printb(int n)
{
int i;
	for(i=31;i>=0;i--)
	{
		printf("%d",n>>i&1);
	}
	printf("\n");

}
