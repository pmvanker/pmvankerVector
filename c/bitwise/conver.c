#include<stdio.h>
main()
{
	int i;
	unsigned data,a,b;
	printf("Enter the file :");
	scanf("%d",&a);

	for(i=31;i>=0;i--)
	{printf("%d",(a>>i)&1);}
	
	printf("\n");

	data1=data=a;
	
	printf("Enter the Right shit :");
	scanf("%d",&b);

	data=data>>31-b|data<<b;

	printf("Enter the left shit :");
	scanf("%d",&b);

	printf("left shift data\n");
	for(i=31;i>=0;i--)
	{printf("%d",(data>>i)&1);}
	printf("\n");
	
	data1=data1>>31-b|data1<<b;

	printf("right shift data\n");
	for(i=31;i>=0;i--)
	{printf("%d",(data1>>i)&1);}
	printf("\n");
}
