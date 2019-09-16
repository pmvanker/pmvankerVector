#include<stdio.h>
main()
{
	char s[5]="hello",ch='e';
	int i,j;
	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;j<s[j];j++)
			s[j]=s[j+1];
			i--;
		}
	}
printf("%s\n",s);
}
