 #include<stdio.h>
        void t1(char *q);
        main()
        {
		char *p;		// RAM
		p = "abcder";		// point a
		t1(p);
        }
        void t1(char *q)		// q=a
        {
		if(*q!='r')
		{
			putchar(*q);		//abcde
			t1(q++);		// post inc so recursion if never end so core dump 
		}
        }
