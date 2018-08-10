/*Tuesday 02 August 2016 09:51:18 PM IST 
*/

#include<stdio.h>
#include<stdlib.h>
main()
{
	int x=3,y,z;
	y = x =10;     //x=10,y=10
	z = x <10;	   //(x<10) this value is false so 0 and z=0;
	printf("\n x=%d y=%d z=%d\n",x,y,z);	
}
/*x=10 y=10 z=0*/
