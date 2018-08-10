#include<stdio.h>
int my_strlen(char *p);
main()
{
	int l;
	l=my_strlen("hello");
	printf("%d\n",l);
}
int my_strlen(char *p)
{
	if(*p)
	return (1+my_strlen(p+1));
	else
	return 0;
}
