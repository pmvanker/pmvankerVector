// replace char a,b
#include<stdio.h>
char s[]="aaaccbb";
int main()
{
	int i,c=0;
	char ch='a';
	for(i=0;s[i];i++)
	{
		if(ch==s[i])
		s[i]='b';
	}
	printf("%s \n",s);

}
