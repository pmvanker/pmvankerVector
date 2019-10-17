#include <stdio.h>
void foo(int *);       
 int main()       
        {
            int i = 97, *p = &i;
            foo(&i);            // call foo passing i address
            printf("%d ", *p);
        }
        void foo(int *q)
        {
            int j = 2;   
            q = &j;     // pointer value change 2 j address
            printf("%d ", *q);
        }
