#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c;
	printf("Type Decimal No : \n");
	scanf("%d",&a);
	
	for(b=31;b>=0;b--)
	{
		c=a>>b;
		if(c&1)
		{
			printf("%d",1);
		}
		else
		{
			printf("%d",0);
		}
	}
printf("\n");
return 0;
}

	
