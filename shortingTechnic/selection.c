#include<stdio.h>
void selection(int *,int);
int main()
{
	int a[]={5,3,2,8,54,3,9,6,5,8,4},l=sizeof(a)/sizeof(a[0]),i;
	
	for(i=0;i<l;i++)
	printf("%d ",a[i]);
	printf("\n");

	selection(a,l);

	
	for(i=0;i<l;i++)
	printf("%d ",a[i]);
	printf("\n");
}
void selection(int *a,int l)
{
	int min,temp,i,j;
	for(i=0;i<l-1;i++)
	{
		for(j=i;j<l;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}	
	}
}
