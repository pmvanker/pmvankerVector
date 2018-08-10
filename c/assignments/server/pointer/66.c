#include <stdio.h>
        int main()
        {
            char a[2][6] = {"hello", "hi"};
            printf("%s  ", *a + 1);		// ello cause fisrt adderss +1
            return 0;
        }
