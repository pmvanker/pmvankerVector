#include<stdio.h>
main()
{
	int i,j,ele;
	int a[5]={1,2,5,1,4};
	ele = sizeof(a)/sizeof(a[0]);    // element size
	for(i=0;i<ele;i++)		//printting
	printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<=ele-1;i++)		//selection short logic	out = element's no loop
	{
		for(j=i+1;j<=ele-1;j++)	
		{
			if(a[i]<a[j])	         		//checking a[0]>a[1]
			{
			a[i]=a[i]+a[j]-(a[j]=a[i]);		//swap logic
			}
		}
	}
	printf("-------------------------------------\n");
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
	printf("\n");
}
