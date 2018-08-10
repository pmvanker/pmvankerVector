#include<stdio.h>
void selection(int *);
main()
{
	int a[5],i;

	for(i=0;i<5;i++)
	scanf("%d",&a[i]);

	selection(a);
	
	for(i=0;i<5;i++)
	printf("%d \n ",a[i]);
}
void selection(int *p)
{
	int i,j,ele;

	for(ele=0;p[ele];ele++);

	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			if(p[i]>p[j])
			p[i]=p[i]+p[j]-(p[j]=p[i]);
		}
	}
}
