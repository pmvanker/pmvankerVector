#include<stdio.h>
main()
{
	char s[10]="hello",d[10];
	my_strcpy(d,s);
	printf("%s %s\n",s,d);
}

void my_strcpy(char *d,const char *s )
{
	while(*d++=*s++);
}
