#include<stdio.h>
main()
{
	int a,b1,b2,b3;
	printf("Enter no:");
	scanf("%d",&a);
	
	b1=a/100;
	printf("%d\n",b1);

	b2=a/10;
	b2=b2/10;
	printf("%d\n",b2);
}	
