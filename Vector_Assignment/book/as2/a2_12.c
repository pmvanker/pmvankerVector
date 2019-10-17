/*Tuesday 02 August 2016 
  assignment 2 (12)
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a=3,b=4,c=6;
	b = (a>b ?(a>c?a:c):(b>c?b:c));
	printf("%d\n",b);
}
/* 4
	
	find the largest no in 1 line ;  alternative of if else
	if(a>b)
		if(a>c) {print a}
		else    {print c}
	else
		if(b>c) {print b}
		else    {print c}			

 */
