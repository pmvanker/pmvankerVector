/* Assignment 2 (14) 
   Tuesday 02 August 2016 */
#include <stdio.h>
#include <stdlib.h>
main()
{
int x=20,y=35;
x=y++ + x++;
y=++y + ++x;
printf("%d %d\n",x,y);
}
/*57 94*/
