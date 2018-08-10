/* Assignment 2 (13) 
   Tuesday 02 August 2016 */
#include <stdio.h>
#include <stdlib.h>
main()
{
int x=5;
printf("%d %d %d \n",x,x<<2,x>>2);
}
/*5 20 1 

right 2 left operation x=5  0000 0101
left  2                     0001 0100 = 20
right 2			    0000 0001 = 01	

*/
