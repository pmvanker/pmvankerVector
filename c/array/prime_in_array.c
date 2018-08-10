#include<stdio.h>
main()
{
	int i,j,c,num;
	printf("Enter the no elements\n");
	scanf("%d",&num);
	int a[num];
	int *p=&a;
	printf("Enter all elements \n");	
	for(i=0;i<num;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<num;i++)
	printf("%d ",a[i]);			//print
	printf("\n");	

	for(i=0;i<num;i++)
	{
		for(j=1,c=0;j<a[i];j++)
		{
			if(a[i]%j==0)
			c++;
		}
		if(c<2)
		printf("%d\n",*(p+i));
	}

}
