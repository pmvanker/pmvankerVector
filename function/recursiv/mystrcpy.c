#include<stdio.h>
void mystrcpy(char *,char *);
int main()
{
	char s[]="hello",d[6];

	mystrcpy(d,s);
	printf("%s\n",d);
}
void mystrcpy(char *d,char *s)
{
	if(*s)
	{
		*d=*s;
		mystrcpy(d+1,s+1);
	}
	else
	*d=*s;
}

