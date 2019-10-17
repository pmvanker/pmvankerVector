#include<stdio.h>
main()
{
	char s[]="hell0";
	printf("%d\n",my_strlen(s));
}
int my_strlen(char *p)
{
	if(*p)
	{
	return (1+my_strlen(p+1));
	}
	else
	return 0;
}
