#include<stdio.h>
void bubble(int *,int);
int main()
{
	int a[]={1,2,3,4,5,6,7,0};
	int i,l;
	l=sizeof(a)/sizeof(a[0]);
	for(i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");

	bubble(a,l);

	for(i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void bubble(int *a,int l)
{
	int i,j,temp,k;
	int c;
	for(c=0,i=0;i<l-1;i++,c++)
	{
		k=0;
		for(j=0;j<l-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				k=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;			
			}
		}
		if(k==0)
			break;
	}
	printf("swaping count = %d\n",c);
}
