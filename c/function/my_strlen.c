#include<stdio.h>

main()
{
	int len;
	char s[]="hello";
	len=my_strlen(s);
	printf("%d\n",len);
}

int my_strlen(char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
