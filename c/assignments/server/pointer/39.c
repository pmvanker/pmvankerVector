#include<stdio.h>
	int main()
	{
		void *p;  
                      int  **ptr;    // 2pointer
                      int a = 129;  
                      p = &a;  	    // p=a	
                      ptr = &p;
		      //*ptr=&a;	 
		printf(" p = %d   p = %u  &p = %u\n", *(int*)p,(int*)p,*(int*)&p);
           }

//39.c:10:3: error: invalid use of void expression 
