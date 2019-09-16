#include<stdio.h>
int mystrlen(const char *);
int main()
{
	char s[20]="hello hi";
	int i;
	i=mystrlen(s);
	printf("%d\n",i);
}
int mystrlen(const char *p)
{
int c=0;
while(*p++)
c++;
return c;
}
