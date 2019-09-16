#include<stdio.h>
main()
{
	int i,j,s;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)		//p1 done
		printf("%d",j);

		for(s=i;s<=4;s++)		//p1 space
		printf(" ");

		for(s=i;s<=4;s++)		//p2 space
		printf(" ");
		
		for(j=i;j>0;j--)		//p2 done
		printf("%d",j);
	printf("\n");
	}
}
