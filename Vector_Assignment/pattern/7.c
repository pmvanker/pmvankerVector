#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1;i<6;i++)
	{
		for(k=1,j=1;j<=i;j++,k++)
		{
			if(i%2)
			printf("%d",k++);
			else
			printf("%d",++k);
		}
	printf("\n");
	}
}
