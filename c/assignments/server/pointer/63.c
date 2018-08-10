#include <stdio.h>
        void main()
        {
            char *a[10] = {"hi", "hello", "how"};// all data in code section
            int i = 0, j = 0;
            a[0] = "hey";			//a[0] is now in ram
            for (i = 0;i < 10; i++)
            printf("%s  ", a[i]);
        }
