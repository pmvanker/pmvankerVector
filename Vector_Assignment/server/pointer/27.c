 #include<stdio.h>
       int main()
     {
	char *p = "Hai friends",  *p1 = p;
	while(*p!='\0');  // while true and and infinite                                  
	++*p++;
	printf("%s  %s\n",p,p1);
     }
