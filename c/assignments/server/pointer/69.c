#include <stdio.h>
        int main(int argc, char *argv[])
        {
            while (*argv++ != NULL)
            printf("%s\n", *argv); //at the time 0 comes cause post increment so printf cant print data 					on the zero so segmentation fault
            return 0;
        }
