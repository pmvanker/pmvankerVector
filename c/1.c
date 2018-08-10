/* given string to upercase */
#include<stdio.h>
int main()
{
	char s[]="hello";
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]>>5&1)
			s[i]=s[i]^1<<5;
	}
	printf("%s\n",s);
}
