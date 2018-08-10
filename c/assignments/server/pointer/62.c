#include <stdio.h>
        void main()
        {
            char *a[10] = {"hi", "hello", "how"};
            int i = 0;
            for (i = 0;i < 2; i++)
	    printf("%s  ", *(a[i]));		// cant derefrence with double pointer a single pointer
						//  *(a[i])=**(a+i)
        }
