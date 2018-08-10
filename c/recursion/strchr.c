#include<stdio.h>
main()
{
	char s[]="hello",ch='e';
	int *p;

	p=my_strchr(s,ch);	
	printf("%u\n",p);

}
char * my_strchr(char *p,char ch)
{
	if(*p)
	{
		if(*p==ch)
		return p;
		else
		return my_strchr(p+1,ch);
	}
	else
	return 0;
}
