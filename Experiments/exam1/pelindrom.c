#include<stdio.h>
int main()
{
	int num,i,sum=0,temp;
	printf("enter num\n");
	scanf("%d",&num);

	temp=num;	
	while(num)
	{
	sum=sum*10+num%10;
	num=num/10;
	}
	temp==sum?printf("palindrom\n"):printf("not palindrom\n");
}
