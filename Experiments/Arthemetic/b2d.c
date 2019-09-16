#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,s;
	printf("Enter Binary Data:");
	scanf("%d",&a);
	for(b=0;b<8;b++)
	{
		a=a<<1;
		if(a&1>0)
		{
			c=a*2;
		}
		else
		{
			c=0;
		}
	s=s+c;
	}
	printf("%d",s);
return 0;
}

		

