#include<stdio.h>
main()
{
	int num,sum;

	printf("Enter the number \n");
	scanf("%d",&num);

	sum=0;
	while(num)
	{
	sum=sum+num%10;
	num=num/10;
	}
	printf("sum %d\n",sum);
}
