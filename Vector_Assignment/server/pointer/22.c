#include <stdio.h>
        void main()
        {
            char *s = "hello";
            char *n = "cjn";
            char *p = s + n;      // cant add binary operator 2 address
            printf("%c\t%c", *p, s[1]);
        }

		
