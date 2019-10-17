#include<stdio.h>
main()
{
	int t1,t2,t3,num,i;
	t1=0;
	t2=1;
	printf("enter the num\n");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
	printf("%d",t1);
	t3=t1+t2;
	t1=t2;
	t2=t3;
	}
	printf("\n");
}
