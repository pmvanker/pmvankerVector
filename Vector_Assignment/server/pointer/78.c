 #include <stdio.h>
        int mul(int a, int b, int c)
        {
            return a * b * c;
        }
        void main()
        {
            int (*function_pointer)(int, int, int);
            function_pointer  =  mul;
            printf("The product of three numbers is:%d",
            function_pointer(2, 3, 4));
        }
