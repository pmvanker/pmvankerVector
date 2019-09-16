/* Swap with using no 3rd variable */


#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter A = ");
	scanf("%d",&a);
	printf("Enter B = ");
	scanf("%d",&b);
	printf("A = %d  B =%d  \n",a,b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("\t\tSWAPING .......\n ");
	printf("A = %d  B = %d\n",a,b);
}

