/*	Tuesday 02 August 2016 
	assignment 2(11)
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int x=4,y=3,z;
	z= x-- -y; 	
	
	printf("%d %d %d\n",x,y,z);
}
/* 3 3 1 
	right 2 left operation  - is priority

z=(x--)-3             -  1
z=4-3       //x=3     -- 2 
z=1	              =  3

	x--=3
        y=3    cause its binary operator	
*/
