#include<stdio.h>
int myatoi(char *);
main()
{
	char s[5]="12345";
	printf("%d\n",myatoi(s));
}

int myatoi(char *p)
{
	int n,i;
	for(i=0,n=0;p[i];i++)
	n=n*10+ p[i] - 48;
	return n;
}
