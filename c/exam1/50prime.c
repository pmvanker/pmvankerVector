#include<stdio.h>
int main()
{
int i,j;
	for(i=50;i<100;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
		}
		if(i==j)
		printf("%d ",i);
	}
printf("\n");
}
