#include<stdio.h>
main()
{
char s[]="hello";
print(s);
}
void print(char *p)
{
	if(*p)
	{
		//printf("%c",*p);
		print(p+1);
		printf("%c",*p);
	}
}



