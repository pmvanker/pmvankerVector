#include<stdio.h>
main()
{
int num,sum=0,temp,i;
//	printf("Enter number :");
//	scanf("%d",&num);
	for(i=100;i<1000;i++)
	{
	for(temp=i;num>0;num=num/10)
		{
		sum=sum + ( (num%10) * (num%10) * (num%10) );
		}
	if(sum==temp)
	printf("%d",temp);
	}
}
