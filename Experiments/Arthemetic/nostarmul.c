#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d=0;
	printf("Enter two value :\n");
	scanf("%d %d",&a,&b);
	for(c=1;c<=b;c++)
	{
		d=d+a;
	}
	printf("%d\n",d);
return 0;
}
