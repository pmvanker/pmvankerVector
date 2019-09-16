#include<stdio.h>
main()
{
	int num,i,c;

	printf("enter the num\n");
	scanf("%d",&num);

	for(i=2,c=0;i<num;i++)
	{
		if(num%i==0)
		{
			c++;
			break;
		}
	}
if(c==0)
printf("prime\n");
else
printf("not prime\n");
}
