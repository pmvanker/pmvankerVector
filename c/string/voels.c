#include<stdio.h>
main()
{
      char s[10],v[6]="aeiou";
int i,j,c=0;
	printf("Enter String :");
	scanf("%s",s);

	printf("%s\n",s);

	for(i=0;v[i];i++)
	{
		for(j=0;s[j];j++)
		{
			if(v[i]==s[j])
			c++;
		}
	}
if(c)
printf("voal\n");
else
printf("not voal\n");
}
