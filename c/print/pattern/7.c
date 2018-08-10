/*1
  10
  101
  1010
  10101
*/
#include<stdio.h>
main()
{
	int a,b;
	
	for(a=0;a<=5;a++)
	{
		for(b=0;b<a;b++)
		{
			printf("%d",(b%2)==0);
		}
	printf("\n");
	}
	
}
