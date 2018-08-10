#include<stdio.h>
main()
{
	int i,max;
	int a[10]={1,6,3,5,1,8,4,7,2,99};
	
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	printf("%d \n",max);




}
