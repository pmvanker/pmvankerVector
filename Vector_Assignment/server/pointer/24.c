#include <stdio.h>
        void foo(int*);
        int main()
        {
            int i = 10,j=20,*p = &i;  // i=10 and pointer poit
            foo(p++);		      // post increment so i address call	
	    foo(p);		      // pointer points  j now 
        }
        void foo(int *p)
        {
            printf("%d\n", *p);
        }
