#include <stdio.h>
void d2bfunc(int x);
main()
{
	int a,b;
	printf("Enter Number : ");
	scanf("%d",&a);
	printf("You Enter Decimal = %d \n",a);
	d2bfunc(a);
	printf("Shift Left value : ");
	scanf("%d",&b);

	a&1<<b?printf("%dpin Set\n",b):printf("%dpin Reset\n",b);

	
}

void d2bfunc(int x)
{
	int num,i;
	num=x;
	for(i=31;i>=0;i--)
	{
		printf("%d",(num>>i)&1);
	}
printf("\n");
}
