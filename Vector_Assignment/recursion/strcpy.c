#include<stdio.h>
void my_strcpy(char *,const char *);
main()
{
	char s[10]="hello",d[20];
	my_strcpy(d,s);
	printf("%s\n",d);
}

void my_strcpy(char *d,const char *s)
{
	if(*s)
	{
		*d=*s;
		my_strcpy(d+1,s+1);		
	}
	else
	{
		*d=*s;
	}
}
