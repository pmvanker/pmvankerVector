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
	a=a^1<<b;
	printf("After Set bit Desimal :%d\n",a);
	d2bfunc(a);	
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
