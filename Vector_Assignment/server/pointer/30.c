#include<stdio.h>
#include<string.h>
        int main()
        {
	//	char s[]="hello,word\n",d[]="good morning\n";
	//    char d[5];
            char *str ="hello,word\n";             // source  in ROM   
            char *strc ="good morning\n";            // destination in ROM
            strcpy(d, str);
            printf("%s",d);
            return 0;
        }
// strcpy cant add \0 (null)at the end of the string 
// cant write rom
