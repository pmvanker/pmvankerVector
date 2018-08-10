#include<stdio.h>
int main()
{
	int i,n=4,fact=1;
	for(i=1;i<n;i++)
	{
	printf("%d* ",i);
	fact=i*(i-1);
	}
}
