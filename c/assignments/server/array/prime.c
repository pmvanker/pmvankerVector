#include<stdio.h>
main()
{
	int num,i,c=0;
	printf("Enter the Data :");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		c++;
	}
	if(c==2)
	printf("prime");
	else
	printf("not Prime");
printf("\n");
}

