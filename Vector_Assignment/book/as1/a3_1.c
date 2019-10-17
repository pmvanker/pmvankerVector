/* Swap with using third variable */

#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter A = ");
	scanf("%d",&a);
	printf("Enter B = ");
	scanf("%d",&b);
	printf("A = %d  B =%d  \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("\t\tSWAPING .......\n ");
	printf("A = %d  B = %d\n",a,b);
}

