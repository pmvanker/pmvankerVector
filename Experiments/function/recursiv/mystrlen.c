#include<stdio.h>

int mystrlen(char *);

int main()
{
	char s[]="hello";
	int c;
	printf("%d \n",mystrlen(s));
}
int mystrlen(char *p)
{
	if(*p)
	return 1+mystrlen(p+1);
	else
	return 0;
}
