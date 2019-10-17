#include <stdio.h>
main()
{
	int x,y;
	printf("Enter the Value : ");
	scanf("%d",&x);

	x==1?printf("Not 2^ power\n"):(x&(x-1)?printf("Not 2^ power\n"):printf("power of 2\n"));
}

