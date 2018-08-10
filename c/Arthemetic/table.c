#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,u,m,x;
	printf("Enter Value : ");
	scanf("%d",&n);
	printf("Enter up 2 value : ");
	scanf("%d",&u);
		
		for(x=0;x<=u;x++)
		{
			m=n*x;

			printf(" %d\t * %d\t = %d\n",n,x,m);
		}
}
