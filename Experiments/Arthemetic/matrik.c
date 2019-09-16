#include <stdio.h>
#include <stdlib.h>
int main()
{
	int c[3],r[3],a,b,g;
	for(b=0;b<3;b++)
	{
		for(a=0;a<3;a++)
		{
		printf("enter row :");
		scanf("%d",&r[a]);	
		printf("| %d %d %d |",r[0],r[1],r[2]);
		}
	}
}

