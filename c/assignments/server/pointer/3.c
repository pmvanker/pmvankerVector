#include<stdio.h>
     int main()
     {
	int x = -300;        // x = 1111 1110 1101 0100
	unsigned char *p;   
	p = &x;                
	printf("%d\n",*p++); // *p++ means assign then increment so *p=1101 0100 then p+1
	printf("%d\n",*p);   // now *p hold next bit *p=1111 1110	
     }
/*212
 254*/
