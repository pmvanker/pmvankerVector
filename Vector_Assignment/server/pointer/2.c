#include <stdio.h>
          int main()
          {
            int *ptr, a = 10;			//a=10
            ptr = &a;				//p=a ,*p=10
            *ptr += 1;				//p=a ,*p=10+1; and a=11
            printf("%d,%d\n", *ptr, a);

          }

//  POINTER HOLD THE A VARAIBLE ADDRESS 

	// SO IT POINT A. SO IT CAN ACCSESS a VALUE AND MODIFY IT INDIRECTLY
