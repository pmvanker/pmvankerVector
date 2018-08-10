  #include<stdio.h>
     int main()
     {
	int x = 10;
	int const * const p;  //  address & DATA is constant 
	p = &x;		      // cant modify address	
	printf("%d\n", *p);
     }
