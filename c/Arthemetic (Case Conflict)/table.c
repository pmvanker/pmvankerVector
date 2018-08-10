/* 31july 2016
   Table of userdefined no
*/
#include <stdio.h>

int main()
{
	int a,b,c,d;
	printf("Enter The no :\n");
	scanf("%d",&a);
	printf("Enter The length :\n");
	scanf("%d",&b);

	for(c=0;c<=b;c++)
	{
		d=a*c;
		printf("%d\t*\t%d\t=\t%d\n",a,c,d);
	}
return 0;
}


