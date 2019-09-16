#include<stdio.h>
void insertion(int *,int);
int main()
{
	int a[]={6,2,3,5,4,0,53,7,9,8},l,i;
	l=sizeof(a)/sizeof(a[0]);
	for(i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");

	insertion(a,l);

	for(i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");

}
void insertion(int *a,int l)
{
	int i,j,temp;
	for(i=1;i<l;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0&&temp<a[j];j--)
			a[j+1]=a[j];
		a[j+1]=temp;
	}
}
