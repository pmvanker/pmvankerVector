 #include <stdio.h>
        int main()
        {
            int i = 97, *p = &i;	//	p = i *p=97
            foo(&p);			// sending pointer address (call by reference)
		
	    printf("%d ", *p);		// 2  couse pointer j 
            return 0;
        }
        void foo(int **p)	//**p = &p = &i    
        {
            int j = 2;
            *p = &j;		 
            printf("%d ", **p);		// 2
        }
