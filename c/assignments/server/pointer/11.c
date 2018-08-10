 #include <stdio.h>
        int main()
        {
            int ary[4] = {1, 8, 3, 4};  // not constant array 
            int *p = ary + 3;	        //  p=[a3] 		
            printf("%d\n", p[-2]);      // *(p-2) = p =a[1]
	  }
