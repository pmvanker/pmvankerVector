#include<stdio.h>
main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(j=5;j>i;j--)
		{
			printf(" *");
		}
	printf("\n");
	}
	for(i=0;i<6;i++)
	{
		for(j=5;j>i;j--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf(" *");
		}
	printf("\n");
	}
}
