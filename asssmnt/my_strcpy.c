#include<stdio.h>

void my_strcpy(const char *,char *);

main()
{
	char s[20]="praful Vanker",d[20];
	my_strcpy(s,d);
	printf("%s\n",d);
}

void my_strcpy(const char *s,char *d)
{
	while(*d++=*s++);
}
