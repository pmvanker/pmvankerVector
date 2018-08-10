/*Tuesday 02 August 2016 
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int k=35;
	printf("\n %d %d %d",k==35,k=50,k>40); //right 2 left oper
	k= - -2;                               // -(-2) means k=2
	printf("\n %d\n",k);	
}

/* 0 50 0
   2
*/
