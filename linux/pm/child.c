#include<stdio.h>
main()
{
	if(fork()==0)
	printf("chiled\n");
	else
	printf("parrent\n");
}
