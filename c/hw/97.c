#include<stdio.h>
main()
{
	int a[100]={[97]=400},i;
	for(i=0;i<100;i++)
	printf("a[%d] = %d\n",i,a[i]);
}
