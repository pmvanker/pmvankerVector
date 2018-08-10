#include<stdio.h>
main()
{
	char s[10],s1[10];
	int i,ele;
	printf("Enrer Strings\n");
	scanf("%s%s",s,s1);

	ele=sizeof(s)/sizeof(s[0]);

	for(i=0;i<=ele;i++)
	{
		if(s[i]!=s1[i])
		break;
	}
	s[i]==s1[i]?printf("Equal\n"):printf("not equal\n");
}
