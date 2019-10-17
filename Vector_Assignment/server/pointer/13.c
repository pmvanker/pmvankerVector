#include <stdio.h>
        int main()
        {
            void *p;                  // no specific data type can be int,char
            int a[4] = {1, 2, 3, 8};  // 
            p = &a[3];                // p = a+3  1016
            int *ptr = &a[2];	        // ptr =a+2 1012	
            int n = (int*)p - ptr;    // 1016-1012/4=1;
            printf("%d\n", n);
        }
