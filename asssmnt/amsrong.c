#include<stdio.h>
main()
{
	int num,temp,sum=0;
	printf("enter the num:");	
	scanf("%d",&num);
	temp=num;
	while(num)
	{
		sum=sum+((num%10)*(num%10)*(num%10));
		num=num/10;
	}
	if(sum==temp)
	printf("amsrong no\n");
	else
	printf("wrong\n");

}
