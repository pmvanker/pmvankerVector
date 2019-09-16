#include<stdio.h>
#include<string.h>
void rev_word(char *);
int main()
{
	char s[]="hello liza how r u";
	printf("%s \n",s);
	rev_word(s);
}

void rev_word(char *str)
{
    int length = strlen(str);
 
    // Traverse string from end
    int i;
    for (i = length - 1; i >= 0; i--) {
        if (str[i] == ' ') {
 
            // putting the NULL character at the 
            // position of space characters for
            // next iteration.          
            str[i] = '\0';
 
            // Start from next charatcer     
            printf("%s ", &(str[i]) + 1);
        }
    }
 
    // printing the last word
    printf("%s", str);
}
