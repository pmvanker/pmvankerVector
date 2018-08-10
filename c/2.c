#include<stdio.h>
char s[]="aaabb";
int main()
{
	int i,c=0;
	char ch='a';
	for(i=0;s[i];i++)
	{
		if(ch==s[i])
		c++;
	}
	printf("%d \n",c);

}
