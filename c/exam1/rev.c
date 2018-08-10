#include<stdio.h>
int main()
{
	int sum,num;
	printf("Enter the num\n");
	scanf("%d",&num);
	sum=0;
	while(num)
	{
		sum=sum*10+num%10;
		num=num/10;
	}
	printf("sum=%d\n",sum);
}
