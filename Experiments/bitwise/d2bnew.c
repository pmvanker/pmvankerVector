#include<stdio.h>
main()
{
int a,i;
scanf("%d",&a);

for (i=31;i>=0;i--)
	{
		printf("%d",(a>>i)&1);
	}
printf("\n");
}
