#include <stdio.h>
        int x = 0;
        void main()
        {
            int *const ptr = &x;    // address is constant
            printf("%p\n", ptr);
            ptr++;			// cant modify address
            printf("%p\n ", ptr);
        }
