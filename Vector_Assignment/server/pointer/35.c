#include <stdio.h>
        int main()
        {
            char *str = "hello world";  // store in ROM
            char strary[] = "hello world";  // Store in RAM
            printf("%d %d\n", strlen(str), strlen(strary));  // finding length
            return 0;
        }

// strlen can not count \0 null counter
