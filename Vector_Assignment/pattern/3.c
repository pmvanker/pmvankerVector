#include<stdio.h>
main()
{
	int i,j,k,l;
	
	for(i=1;i<5;i++)
	{
		for(l=0,j=-4;j<5;j++)
		{
		if(j<0)
		k=-j;
		else
		k=j;
		
		if(i>k)
		printf("%d",++l);
		else
		printf("-");
		}
	printf("\n");
	}
	for(i=5;i>0;i--)
	{
		for(l=0,j=-4;j<5;j++)
		{
		if(j<0)
		k=-j;
		else
		k=j;
		
		if(i>k)
		printf("%d",++l);
		else
		printf("-");
		}
	printf("\n");
	}
}
