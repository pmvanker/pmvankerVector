#include<stdio.h>
void istrcat(char *,const char *);
main()
{
	char d[20]="hello",s[10]="Praful";
	istrcat(d,s);
	printf("%s\n",d);
}
void istrcat(char *d,const char *s)
{
	int i,j;
	for(i=0;d[i];i++);
	i--;
	for(j=0;s[j];j++)
	{
		i++;
		d[i]=s[j];
		printf("%d\n",i);
	}
}
	
