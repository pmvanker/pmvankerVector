/*Wednesday 10 August 2016 01:05:48 PM IST 
  Assignment 3 12th */
#include<stdio.h>
main()
{
	int a=10,b=5,c=3,d=3;
	if( (a>b)&&(c=d++) ) // here if true so d++ execute
		printf("%d %d %d %d \n",a,b,c,d);
	else
		printf("%d %d %d %d \n",a,b,c,d);
}
/*10 5 3 4 */
