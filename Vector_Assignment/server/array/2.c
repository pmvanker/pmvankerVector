#include<stdio.h>
main()
{
	int a[10],i,ele,max,min,temp;
	ele=sizeof(a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

	
	for(i=0,max=a[0];i<ele;i++)
	{
		if(max<a[i])
		max=a[i];
	}

	for(i=0,min=a[0];i<ele;i++)
	{
		if(min>a[i])
		min=a[i];
	}
		
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
	printf("max=%d min =%d\n",max,min);



}
