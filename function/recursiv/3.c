#include<stdio.h>
void print(char *);
void printr(char *);

int main()
{
	char s[]="hello";
	print(s);
	printf("reverse print\n");
	printr(s);
}

void print(char *p)
{
	if(*p)
	{
		printf("%c",*p);
		print(p+1);
	}
}
void printr(char *p)
{
	if(*p)
	{
		printr(p+1);
		printf("%c",*p);
	}
}


