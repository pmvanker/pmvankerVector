 #include <stdio.h>
        void foo( int[] );
        int main()
        {
            int ary[4] = {1, 2, 3, 4},i;  // store IN RAM
            foo(ary);			// call
 	    printf("%d \n", ary[0]);
	}
        void foo(int p[4])// int *(p+4)
 	{		 
            int i = 10;
            p = &i;	
            printf("p[0]= %p    %d\n",&p[0],p[0]); 
        }

