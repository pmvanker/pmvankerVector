#include<stdio.h>
main()
{
	int num,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num)
	{
	sum=(sum*10) + (num%10);
	num/=10;
	}
	printf("Reverse = %d\n",sum);
}
