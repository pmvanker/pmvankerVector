 #include<stdio.h>
       main()
       {
	char a[]="abcde";
	char *p=a; //    p=a     a
	p++;	   //    p=a+1;  b
	p++;	   //    p=a+2;	 c
	p[2]='z';  //    *(p+2)  a[4]= z but *p at c  data chng address same
	printf("%s\n",p);
       }
//cdz


