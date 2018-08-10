#include<stdio.h>
main()
{
	int a=2,b=3,power=0;
	while(b-1)
	{
		power=power+a*a;
		b--;
	}
	printf("power:%d\n",power);

}
