#include<stdio.h>
main()
{
		int i=10;
		int *p=&i;
//		i=12;
		printf("%d   %d\n",i,++(*p));
}
