#include<stdio.h>
int my_strlen(const char *);
main()
{
	char s[10]="hello";
	
	printf("length of string %d \n",my_strlen(s));
}
int my_strlen(const char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
