/*Wednesday 27 July 2016 05:04:02 PM IST 
	Division Without using / 
*/
#include <stdio.h>
main()
{
	int a,b,c;
	printf("Enter First INPUT :\t");	
	scanf("%d",&a);
	printf("Enter Second INPUT :\t");	
	scanf("%d",&b);

	for(c=0;c<=b+1000;c++)
	{
		a=a-b;
		if(a<0)
		{
			printf("Division %d ",c);
			break;	
		}
	}
	
}
