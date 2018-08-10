#include<stdio.h>
void mystrcpy(char *,char *);
int main()
{
	char s[]="helloooo wooooo__ oo rld";
	printf("%s\n",s);

	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]=='o')
		{
			mystrcpy(s+i,s+i+1);
			i--;
		}
	}
	printf("%s \n",s);
}
void mystrcpy(char *d,char *s)
{
	while(*d++=*s++);
}
