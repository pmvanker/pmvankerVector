#include<stdio.h>
main()
{
	int num,i,a[1];

	printf("enter the no\n");
	scanf("%d",&num);
	
	for(i=31;i>=0;i--)
	printf("%d",num>>i&1);
	printf("\n");

	printf("enter the 2 bit\n");
	scanf("%d%d",&a[0],&a[1]);

	(num>>a[0])&1?printf("%d=Set\n",a[0]):printf("%d=Reset\n",a[0]);
	(num>>a[1])&1?printf("%d=Set\n",a[1]):printf("%d=Reset\n",a[1]);

}
