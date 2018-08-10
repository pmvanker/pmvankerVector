#include <stdio.h>
        void main()
        {
            int k = 5;		//k =5
            int *p = &k;	// p=k
            int **m  = &p;	//m=k, p=10
             **m = 10;
            printf("%d%d%d\n", k, *p, **m);	// 10 10 10
        }
