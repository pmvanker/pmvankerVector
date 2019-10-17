#include <stdio.h>
        void main()
        {
            int a[3] = {1, 2, 3};
            int *p = a;
            int *r = &p;	// must intialize double ponter **r = &p to use it
            printf("%d\n",(**r));
        }
