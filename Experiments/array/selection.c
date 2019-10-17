#include<stdio.h>
main()
{
	int i,j,temp;
	int a[10]={1,6,3,5,1,8,4,7,2,99};
	
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	printf("\n");

	for(i=0;i<9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	
		}
	}

	printf("Selection Short\n");
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	printf("\n");



}
