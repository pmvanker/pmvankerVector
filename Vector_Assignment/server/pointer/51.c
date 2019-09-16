  #include <stdio.h>
        void f(char *k)	 //		k= h
        {
            k++;		// k= e
            k[2] = 'm';		// *(k+2)= m   possiible  mo
            printf("%c\n", *k);		// e  print
        }
        void main()
        {
            char s[] = "hello";   // RAM data
            f(s);		  // call
            printf("%s\n",s);		// helmo 
        }
