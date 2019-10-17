#include<stdio.h>
void oddeven(int,const int *,int *,int *);
main()
{
	int a[5],i,odd,even,ele;
	int *sum=&even,*product=&odd;
	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter the Data:\n");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
	printf("%d ",a[i]);

	oddeven(ele,a,sum,product);
	printf("Product of ODD : %d\nSum of Even :%d\n",odd,even);
}

void oddeven(int e,const int *p,int *sum1,int *product1)
{
int j,sum=0,product=1,k;
k=e;
	for(j=0;j<k;j++)
	{
		if(p[j]%2)
		sum=sum+p[j];			
		else
		product=product*p[j];
	}
*sum1=sum;
*product1=product;
}
