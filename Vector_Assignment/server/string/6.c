/*Write a program to reverse the string using loops & using recursion.*/
#include<stdio.h>
void print(char *);
main()
{
	int i;
	char s[10];

	printf("Enter the string\n");
	scanf("%s",s);

	print(s);
//	for(i=10;i>=0;i--)
//	printf("%c",s[i]);

printf("\n");
}

void print(char *p)
{
	if(*p)
	{
		printf(p+1);
		printf("%c",*p);
	}
}
