/*Write a one line code to copy the string into another buffer. */
void my_strcpy(char *,char *);
#include<stdio.h>
main()
{
	char s[10]="Praful",d[10];
	printf("%s \t %s\n",s,d);
	
	//my_strcpy(d,s);
	printf("%s \t %s\n",s,d);
}

void my_strcpy(char *p,char *q)
{
int i;
for(i=0;i<q[i];i++)
p[i]=q[i];
}
