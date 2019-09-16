#include<stdio.h>
char * mystrchr(char *,char);
int main()
{
	char *q;
	char s[]="hello",ch='o';
	q=mystrchr(s,ch);
	printf("add %u ch %c string %s\n",q,*q,q);
}
char * mystrchr(char *p,char ch)
{
	if(*p)
	{
		if(*p==ch)
			return p;
		else
			return mystrchr(p+1,ch);

	}
	else
		return 0;

}
