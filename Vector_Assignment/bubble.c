#include<stdio.h>
void bubble(int *);
main()
{
	int a[5],i;
	
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<5;i++)
	printf("%d\n",a[i]);

	bubble(a);

	printf("After Shotr......\n");
	for(i=0;i<5;i++)
	printf("%d\n",a[i]);
}

void bubble(int *p)
{
	int i,j,ele;
	
	for(ele=0;p[ele];ele++);

	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(p[j]>p[j+1])
			p[j]=p[j]+p[j+1]-(p[j+1]=p[j]);			
		}
	}
}
