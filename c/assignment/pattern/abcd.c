#include<stdio.h>
main()
{
	int i,j,k,n;
	char ch='F';
	for(i=0;i<=6;i++)
	{
		for(j=-6;j<=6;j++)
		{
			if(j<0)
				k=-j;	
			else
				k=j;
			if(i>k)
				printf("-");
			else
			{
				printf("%c",ch-k+1);
			}
		}
	ch = 'F';
	printf("\n");
	}
}
