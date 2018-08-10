#include<stdio.h>
char * mystrchr(const char *,char);
main()
{
	char s[10]="hello",ch='e';
	char *p;
	p=mystrchr(s,ch);
	printf("%u\n",p);
}
char * mystrchr(const char *p,char ch)
{
	if(*p)
	{
		if(*p==ch)
		return p;
		else
		return (mystrchr(p+1,ch));
	}
	else
	return 0;
}
