#include<stdio.h>
main()
{
	int num,i;
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		printf("%d",(num>>i)&1);
	//	printf("%d",num&(1>>i));  not solved
	}
printf("\n");
}
