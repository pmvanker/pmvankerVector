/* 28 july 4:17pm 2016
   practicing the pateern program
   Manual data consifer as the pattern lenth
   v16be3V2 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	printf("How much long Pattern :");
	scanf("%d",&c);

	for(a=0;a<c;a++)
	{
		for (b=a;b<c;b++)
		{
		printf("*");
		}
	printf("\n");
	}
return 0;
}
