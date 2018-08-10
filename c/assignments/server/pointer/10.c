#include <stdio.h>
        int main()
         {
            const int ary[4] = {1, 2, 3, 4};   // constant array values
            int *p;			       // integer pointer 
            p = ary + 3;		       // p= a[4] so *p=4	
            *p = 5;			       // *p =5 so a[4]= 5 even its constant array	
            printf("%d\n", ary[3]);		// 5 output
        }
