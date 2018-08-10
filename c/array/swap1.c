#include<stdio.h>
main()
{
	int i,j,ele;
	int a[5]={1,2,5,1,4};
	ele = sizeof(a)/sizeof(a[0]);    // element size
	for(i=0;i<ele;i++)		//printting
	printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<ele-1;i++)		//buble swaping logic	out = element's no loop
	{
		for(j=0;j<ele-1-i;j++)	
		{
			if(a[j]>a[j+1])	         		//checking a[0]>a[1]
			{
			a[j]=a[j]+a[j+1]-(a[j+1]=a[j]);		//swap logic
			}
		}
	}
	printf("-------------------------------------\n");
	for(i=0;i<ele;i++)
	printf("%d ",a[i]);
	printf("\n");
}
