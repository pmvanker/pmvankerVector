#include<stdio.h>
print(char *p)
{
	if(*p)
	{
		print(p+1);
		printf("%c",*p);
	}


}


main()
{
	char s[]="praful";
	printf("%s\n",s);
	print(s);
	printf("\n");
}
