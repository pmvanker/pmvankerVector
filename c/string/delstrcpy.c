#include<stdio.h>
#include<string.h>
main()
{
	char s[10]="h el l o",ch='e';
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
		{
			strcpy(s+i,s+i+1);
			i--;
		}
	}
	printf("%s\n",s);


}


