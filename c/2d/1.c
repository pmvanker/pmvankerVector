#include<stdio.h>
void scan(char (*)[10]);
void print(char (*)[10]);
main()
{
	char s[2][10];
//	char s[2][10]={"Praful","Vanker"};
	scan(s);
	print(s);
	printf("\n");
}

void print(char (*p)[10])
{
	int i;
	for(i=0;i<2;i++)
	printf("%s \t",p[i]);
}
void scan(char (*s)[10])
{
	int i;
	for(i=0;i<2;i++)
	scanf("%s",s[i]);
}
