/*Tuesday 02 August 2016 09:36:13 PM IST 
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int i=2,j=3,k,l;    
	float a,b;		  
	k=i/j*j;		
	l=j/i*i;		
	a=i/j*j;           
	b=j/i*l;

	printf("%d %d %f %f\n",k,l,a,b);	
}

/*Output = 0 2 0.000000 2.000000*/
