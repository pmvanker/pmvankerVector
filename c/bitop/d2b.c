#include<stdio.h>
main()
{
	int a,b[31],i;
	printf("Enter no:");
	scanf("%d",&a);
	printf("You Enter Decimal : %d \n Binary :",a);
	for(i=0;i<31;i++)
	{
	 b[i]= a%2?1:0;
	 a/=2;
	}
	for(i=31;i>=0;i--)
	{

	 	b[i]= a%2?1:0;
	 	a/=2;
		if(i==23){printf(" ");}
		if(i==15){printf(" ");}
		if(i==7){printf(" ");}
		printf("%d",b[i]);
	}	
	
printf("\n");
}
