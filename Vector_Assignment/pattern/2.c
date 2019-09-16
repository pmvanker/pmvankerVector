#include<stdio.h>
main()
{
	int i,j,k,num,op;
	printf("Enter the lenght :");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		for(j=-num;j<=num;j++)
		{
			if(j<0)
			k=-j;
			else
			k=j;
			if(i>=k)
			printf("*");
			else
			printf("-");
		}
	printf("\n");
	}
	for(i=num;i>=0;i--)
	{
		for(j=-num;j<=num;j++)
		{
			if(j<0)
			k=-j;
			else
			k=j;
			if(i>=k)
			printf("*");
			else
			printf("-");
		}
	printf("\n");
	}
}
