/*find the number is powerof 2*/
#include<stdio.h>
main()
{	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	num&num-1?printf("Not Power of 2\n"):printf("Power of 2\n");
}

