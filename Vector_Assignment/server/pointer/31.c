#include <stdio.h>
        int main()
        {
            char *str = "hello world";                // sourse in ROM
            char strc[50] = "good morning india\n";   // Destination in RAM
            strcpy(strc, str);
            printf("%s\n", strc);
            return 0;
        }

// output is hello word cause it copy after \0 to
