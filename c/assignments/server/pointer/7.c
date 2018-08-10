#include<stdio.h>
     int main()
     {
	int const *p = 5;     // Data constant  address varry
	int q;
	p = &q;		     // it can			
	printf("%d",++(*p)); 	// cant vary the data
     }
