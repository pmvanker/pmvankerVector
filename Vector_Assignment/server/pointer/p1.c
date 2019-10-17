#include<stdio.h>
main()
{
int *ip,i=10;

ip=&i;

printf("i=%d *ip=%d\n",i,*ip);

*ip = 20;

printf("i=%d *ip=%d\n",i,*ip);


}
