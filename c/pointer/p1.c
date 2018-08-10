#include<stdio.h>
main()
{
	int * const p;
	int a=10;
	p=&a;
	++*p;
	printf("%d \n",*p);
	printf("%p \n",&p);
}
