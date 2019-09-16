#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5},max,i,sl;
	max=a[0];
	sl=a[0];
	for(i=0;i<5;i++)
	{
		if(max>a[i])
		sl=max;
		max=a[i];
	}
	printf("max=%d\n  sl =%d\n ",max,sl);

}
