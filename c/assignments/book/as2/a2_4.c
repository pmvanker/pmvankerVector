/*Tuesday 02 August 2016 09:46:15 PM IST 
*/

#include<stdio.h>
#include<stdlib.h>
main()
{
	int x=7,y=10,a,b;
	a= x || y ;                // Condition logical or adding both
	printf("\n a =%d\n",a);
	b = x | y;		  // bitwise or operation	
	printf("\n a =%d\n",b);
}
/*	OUTPUT
a =1    x and y both are non zero so output 1

a =15   bitwise operation

     8 4 2 1
7  = 0 1 1 1  
10 = 1 0 1 0
15 = 1 1 1 1 


*/


