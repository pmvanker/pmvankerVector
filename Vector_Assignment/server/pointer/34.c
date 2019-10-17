#include <stdio.h>
        int main()
        {
            char *str = "hello world";  // size 4 (not fix the leangth) 
            char strary[] = "hello world";  // size 12 (fix leangth)
            printf("%d %d\n", sizeof(str), sizeof(strary));
            return 0;
        }
