#include <stdio.h>
        int main()
        {
            char str[] = "hello, world"; // store in RAM
            str[5] = '.';		// can write there
            printf("%s\n", str);
            return 0;
        }
