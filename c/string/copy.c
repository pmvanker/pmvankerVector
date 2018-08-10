#include<stdio.h>
main()
{
	char s[]="pmvanker",d[10];
	int i;

	for(i=0;s[i];i++)
	d[i]=s[i];
	d[i]='\0';
	printf("%s",d);

}
