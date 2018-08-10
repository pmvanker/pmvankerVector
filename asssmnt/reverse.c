#include<stdio.h>
main()
{
	int a[8]={10,20,30,40,50,60,70,80};
	int i,j;

	for(i=0;i<8;i++)
	printf("%d ",a[i]);
	printf("\n");
	
	for(i=0,j=8 ; i<j ; i++,j--)
	{
		a[i]=a[i]+a[j] - (a[j]=a[i]);
		printf("%d \n",i);
	}	

	
	for(i=0;i<8;i++)
	printf("%d ",a[i]);
	printf("\n");


}
