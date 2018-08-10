 #include <stdio.h>
        int main()
        {
            int a[4] = {1, 2, 3, 4};// array block address increment by 4 byte
            void *p = &a[1];        //  void type pointer so  = a+4  1000
            void *ptr = &a[2];      //                    ptr = a+8  1004
            int n = 1;         
            n = ptr - p;                   // a+8-a-4 =4
            printf("%d\n", n);
        }
