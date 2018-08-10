/* find second lrgest */
#include<stdio.h>
main()
{
	int i,a[10],fbig,sbig,temp;
	
	printf("Ener the data\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	fbig=a[0];
	sbig=a[1];

	if(fbig<sbig)
	{
		temp=fbig;
		fbig=sbig;
		sbig=temp;
	}

	for(i=2;i<10;i++)
	if(a[i]>fbig)
	{
		sbig=fbig;
		fbig=a[i];
	}
	else if (a[i]>sbig)
		sbig=a[i];
	
	printf("first %d second %d \n",fbig,sbig);
}
