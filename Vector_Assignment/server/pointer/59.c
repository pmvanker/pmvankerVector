#include <stdio.h>
        void foo(int *const *p);
        int main()
        {
            int i = 11;
            int *p = &i;
            foo(&p);		// call by reference
            printf("%d ", *p);
        }
        void foo(int *const *p)		// CONSTANT DATA
        {
            int j = 10;
	   *p = &j;			// so error
            printf("%d ", **p);
        }
