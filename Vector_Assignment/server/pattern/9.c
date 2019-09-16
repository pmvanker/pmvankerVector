/*
        1 
      1 2 3 
    1 2 3 4 5 
  1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9 
  1 2 3 4 5 6 7 
    1 2 3 4 5 
      1 2 3 
        1 
*/
#include<stdio.h>
main()
{
	int i,j,s,k;
	for(i=1;i<=5;i++)
	{
		for(s=i;s<=4;s++)
		{	
		printf("-");
		}
		for(j=1;j<(i*2);j++)
		{
			printf("%d",j);
		}
	printf("\n");
	}
	
	for(i=4;i>0;i--)
	{
		for(s=4;s>=i;s--)
		{	
		printf("-");
		}
		for(j=1;j<(i*2);j++)
		{
			printf("%d",j);
		}
	printf("\n");
	}
}
