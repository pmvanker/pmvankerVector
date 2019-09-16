/* Tuesday 02 August 2016 assignmet 2 (8)
*/

#include<stdio.h>
#include<stdlib.h>
main()
{
	int x,y;
	scanf("%d",&x);
	y=(x<0)?-x:x;    // trynary operator
	printf("absolute value of %d is %d \n",x,y);
}		
/*
-10
absolute value of -10 is 10 
	if(x<0)	
		x=-x
	else
		x=x

*/
