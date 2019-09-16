#include <stdio.h>
        void m(int *p)          // pointing arrat base
        {
            int i = 0;
            for(i = 0;i < 5; i++)     
            printf("%d\t", p[i]);   // so incrementing pointer by 1 and type the aaray data
        }
        void main()
        {
            int a[5] = {6, 5, 3};
            m(&a);                    //sending array base address
        }
/*6 5 3  0 0 */
