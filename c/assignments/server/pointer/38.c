#include<stdio.h>
	int main()
	{
		int *p;					//1000
                      int  **ptr;  			//1004
                      int a = 129;			//1008
		p = &a;  					
                      ptr = &p;
		printf("p = %d   p = %u  &p = %u\n",*p, p, &p);
         }
