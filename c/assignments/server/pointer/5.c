#include<stdio.h>
     int main() 
     {
 	int x = 300;
	if(*(char *)&x == 44 )    // &x is pointer address
	printf("Little Endian\n");
	else
	printf("Big Endian\n");
     }
