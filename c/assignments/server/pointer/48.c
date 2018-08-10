#include<stdio.h>
	int main()
	{
		char a[]="Hello";		// ROM 
		char *p="Hai";		 
//		a="Hai";       // array constant cant change address 
		p="Hello";    			// in RAM assigning can be accessed
		printf("%s  %s\n",a,p);
		return 0;
	}
