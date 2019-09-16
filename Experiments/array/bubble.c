#include<stdio.h>
main()
{
	int i,j,temp;
	int a[10]={1,6,3,5,1,8,4,7,2,99};
	
	for(i=0;i<9;i++)
	{	
		for(j=0;j<9-i;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}	
		}		
	}
	
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	printf("\n");



}
