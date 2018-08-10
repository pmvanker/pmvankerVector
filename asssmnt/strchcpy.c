#include<stdio.h>
void my_strcpy(char *,const char *);
char * my_strchr(char *,char);
main()
{
	char s[20],ch,*p;
	printf("enter the string and ch\n");
	scanf("%s %c",s,&ch);
	
	while(p=my_strchr(s,ch))
	{
		my_strcpy(p,p+1);	
	}
printf("%s\n",s);
}

void my_strcpy(char *p,const char *q)
{
	while(*p++=*q++);
}
char * my_strchr(char *p,char ch)
{
	int i,j;
	for(i=0;p[i];i++)
	{
		if(p[i]==ch)
		return p+i;
	}
}
