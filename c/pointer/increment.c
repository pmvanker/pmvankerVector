#include<stdio.h>
main()
{
	int a=10,b=20;
	int *p=&a;

	printf("a    = %u   b= %u \n",a,b);
	printf("p    = %u\n",p);
	printf("&a   = %u\n",&a);
	printf("&p   = %u\n",&p);
	printf("++*p = %u\n",++*p);
	printf("--*p = %u\n",--*p);
	printf("*p-- = %u\n",*p--);
	printf("*p++ =  %u\n",*p++);
}
