/*Tuesday 02 August 2016 assignment 2 (10)
*/

#include<stdio.h>
#include<stdlib.h>
main()
{
	int x=4,y,z;
	y= --x ; 			// decrement then copy
	z= x-- ;			// copy then decrement
	printf("%d %d %d\n",x,y,z);
}
/* 2 3 3  */
