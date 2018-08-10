#include<stdio.h>
        int main()
        {
	int i;                  // interger
	double a = 5.2;		// double 						
	char *ptr;		// charecter pointer
	ptr = (char *)&a;	// consider as charecter pointer address
	for(i=0;i<=7;i++)
	printf("%d\n",*ptr++);
	return 0;
        }
