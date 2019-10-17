/* Tuesday 02 August 2016 09:40:53 PM IST 
   assignment 2 - 3rd quation */

#include<stdio.h>
#include<stdlib.h>
main()
{
	int x=3,y=5,z;
	z= x && y;             // logical AND chek both r zero
	printf("\n z=%d\n",z);
	z= x & y;		     // bitwise AND 8bit anding
	printf("\n z=%d\n",z);	
}
/*Output
z=1		 // any  zero then output 0
		 // both non zero output  1	 

z=1		 // bitwise operation

    			8 4 2 1
		    3 =	0 0 1 1 
		    5 =	0 1 0 1    // and operation  
		    1 =	0 0 0 1
*/

