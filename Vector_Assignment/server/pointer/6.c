#include <stdio.h>
        void main()
        {
            int x = 0;        
            int *ptr = &5;       // cant point constant value as address
            printf("%p\n", ptr);
        }
