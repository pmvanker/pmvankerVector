#include<stdio.h>
void mystrcpy(char *,const char *);
int main()
{
	char s[10]="hello",d[10];
	mystrcpy(d,s);
	printf("%s\n",d);
}
void mystrcpy(char *d,const char *s)
{
	while(*d++=*s++);
}
