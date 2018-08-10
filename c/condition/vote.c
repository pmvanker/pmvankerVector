/*	CONDITION CHELING WITH IF STATEMENT IS AGE IS VALID FOR VOT OR NOT
	VB16BE3V2 5:11PM 28 JULY 16
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	printf("Enter Age : ");
	scanf("%d",&a);
	if(a>=8)
	{
		printf("You Can Vote\n");
	}
	else
	{
		printf("You Can NOT vote\n");
	}
return 0;
}
