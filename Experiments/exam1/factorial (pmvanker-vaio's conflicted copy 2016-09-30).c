#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("enter the num\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	fact=i*fact;
	printf("%d\n",fact);
}
