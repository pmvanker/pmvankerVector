#include <stdio.h>
          int main()
          {
              int i = 10;
            void *p = &i;  // no datatype pointer it can be int , char 
         //   printf("%d\n", (int *)*p);		// p work as int pointer
          printf("%d\n", *(int*)p); // using void pointer as interger pointer valid way
            return 0;
        }
