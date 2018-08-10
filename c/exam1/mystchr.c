#include<stdio.h>
char * mystrchr(char *,char);
int main()
{
	char s[10]="hello",ch='l';
	char *p;
	int i;
	for(i=0;s[i];i++)
	printf("%c = %u\n",s[i],&s[i]);
	
	p=mystrchr(s,ch);
	if(p==0)
	printf("Char not Found\n");
	else
	printf("%c=%u\n",*p,p);
}
char * mystrchr(char *q,char ch)
{
	while(*q++)
	if(*q==ch)
	return q;
	return 0;
}

