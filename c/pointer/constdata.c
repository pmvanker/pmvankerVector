#include<stdio.h>
main()
{
	int a=10,b=5;
	int const *p=&a;
	printf("%d\n",a);
	p=&b;
	printf("%d\n",*p);

}
