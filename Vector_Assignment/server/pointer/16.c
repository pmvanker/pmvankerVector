#include <stdio.h>
        int main()
        {
            double *ptr =(double*)100;  // pointer increment 8times and (double casting to 100)
            ptr = ptr + 2;   // ptr = 100 , pt2 + 2 = 116
		printf("%d\n",sizeof(ptr));            
		printf("%u\n", ptr);
        }
