#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5};
	int max,i,sl;
	max=a[0];
	sl=a[0];
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
		if(max<a[i])
		{
			sl=max;
			max=a[i];
		}
	}
	printf("\nmaximum %d  sencod largest %d \n",max,sl);
}
