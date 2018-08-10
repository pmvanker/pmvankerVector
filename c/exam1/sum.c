#include<stdio.h>
int main()
{
	int num,i,sum;
	printf("enter num\n");
	scanf("%d",&num);
	sum=0;
	while(num)
	{
	sum=sum+num%10;
	num=num/10;
	}
	printf("Sum = %d\n",sum);
}
