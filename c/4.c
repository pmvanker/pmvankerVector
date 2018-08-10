// delete char from string

#include<stdio.h>
int main()
{
	char s[]="hello Woooorld";
	int i,j;
	char ch='o';
	printf("%s \n",s);
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
			{
				s[j]=s[j+1];
	
			}
		i--;
		}
	}
	printf("after %s \n",s);
}
