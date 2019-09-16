#include<stdio.h>
main()
{
	int i,j,num,c;
	
	for(j=0;j<50;j++)
	{
		for(i=2,c=0;i<j;i++)
		{
			if(i%j==0)
			{
				c++;	
				break;				
			}
		}
	if(c==0)
	printf("%d ",j);
	}
printf("\n");
}
