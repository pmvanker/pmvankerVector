#include<stdio.h>
main()
{
	int num,sum,temp;
	
	printf("enter the num\n");
	scanf("%d",&num);
	temp=num;
	sum=0;
	while(num)
	{
	sum=sum*10+num%10;	
	num=num/10;
	}

if(sum==temp)
	printf("palidrom no\n");
else
	printf("not palidrome no\n");
}
