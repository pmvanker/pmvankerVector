#include<stdio.h>
int main()
{
	int i,j,c;
	char s[20];
	scanf("%s",s);
	char temp[20];
	for(c=0;s[c];c++);
	for(i=0,j=c-1;j>=0;j--,i++)
	{
		temp[i]=s[j];
	}
	temp[i]='\0';
	printf("%s %s\n",temp,s);

	for(i=0;s[i];i++)
	{
		if(s[i]!=temp[i])
		{
		 printf("not palidrom\n");
		 exit(0);	
		}
	}
	printf("palidrom\n");
}
