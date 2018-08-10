#include<stdio.h>
      int main()
      {
	int x = 256;   // x = 1 0000 0000
	char *p = &x;  // *p= 0000 0000
	*++p = 2;      // p+1=0000 0001 then assiin there p+1= 0000 0010
	printf("%d",x); // x= 0010 0000 0000 
      }
/* 512 */
