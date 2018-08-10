#include <stdlib.h> 
#include <stdio.h>
        int *f();
        int main()
        {
             int *p = f();			// call fun
             printf("%d\n", *p);		//print 10
        } 	
        int *f()				// int * return type so return address
        { 
             int *j = (int*)malloc(sizeof(int));	//dynamic add
            *j = 10;					//intilize data
             return j;					//return dynamic add
        }
