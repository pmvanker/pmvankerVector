#include<stdio.h>
#include<string.h>
	int main()
	{
		char *str1 = "Hello";    // charecter pointer ROM
		char *str2 = "Hai";	 // charecter poiner ROM	
		char *str3;		 // charecter pointer R0M
		str3 = strcat(str1,str2);	// cant write
		printf("%s  %s\n",str3,str1);
		return 0;
	}

