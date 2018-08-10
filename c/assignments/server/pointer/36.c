#include<stdio.h>
       int main() 
       {
	int a = 5,b = 4,c = 9;
	*(a>b ? &a : &b) = (a+b)>c;  // *(&a)=0   a=0, b=4
	printf("%d  %d\n",a,b);
       }
