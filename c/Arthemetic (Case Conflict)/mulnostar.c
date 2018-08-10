/*Wednesday 27 July 2016 05:04:02 PM IST 
	Multification without using Star
*/
#include <stdio.h>
main()
{
	int a,b,c,d=0;
	printf("Enter First INPUT :\t");	
	scanf("%d",&a);
	printf("Enter Second INPUT :\t");	
	scanf("%d",&b);

	for(c=1;c<=b;c++)
	{
		d=d+a;
	}
	printf("ANSWER : %d\n",d);
}


