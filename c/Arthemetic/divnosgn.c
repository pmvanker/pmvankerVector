#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d;
        printf("Enter Value : ");
	scanf("%d",&a);
        printf("Enter Second Value : ");
	scanf("%d",&b);

	for(c=0;c<=b+10000;c++)
	{
		a=a-b;
		if(a<0)
		{
			printf("%d",c);
			break;
		}			
	}
return 0;	
}
