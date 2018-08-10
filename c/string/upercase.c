#include<stdio.h>
main()
{
	char s[10];
	int i;
	printf("Enter The String 1:");
	scanf("%s",s);

	for(i=0;s[i];i++)
	if(s[i]>>5&1)
	s[i]=s[i]^1<<5;

	printf("%s\n",s);


}

