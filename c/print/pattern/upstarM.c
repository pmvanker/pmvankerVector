/* 28 july 2016 4:43pm
   v16be3V2  Pattern program
   printing 1-5 star upword
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	printf("Enter the Upstar Lenth :");
	scanf("%d",&c);

	for(a=0;a<=c;a++)
	{
		for(b=0;b<=a;b++)
		{
		printf("*");
		}
	printf("\n");
	}
return 0;
}
