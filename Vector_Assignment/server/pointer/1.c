 #include <stdio.h> 
     int main() 
     {
	int *p = 10;                          	// can assign constant address 
	printf(" %u\n", (unsigned int)p);	// can print address
	printf("%d\n",*p);			//cant access it
     						// segmantation fault Runtime error
     }

