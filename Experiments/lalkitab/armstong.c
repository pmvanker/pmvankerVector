#include<stdio.h>
main()
{
int i,num,sum=0;
//	printf("Enter number :");
//	scanf("%d",&num);
		for(num=153;num>=0;num=num/10)
		{
			sum=sum + ( (num%10) * (num%10) * (num%10) );
		}
		if(sum==num)
		printf("%d,",sum);
}
