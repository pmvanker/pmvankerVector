 #include <stdio.h>
        int main()
        {
            char *str = "hello, world\n";  // source in ROM
            str[5] = '.';                  // cant write in ROM
            printf("%s\n", str);
            return 0;
        }
