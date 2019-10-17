#include<stdio.h>
main()
{
	char s[20]={},temp[20]={};
	int i,j,l;
	
	printf("Enter the string\n");
	scanf("%s",s);

	for(l=0;s[l];l++);

	for(i=0;s[i];i++)
	temp[i]=s[i];

	for(i=l-1,j=0 ; i>j ; i--,j++)
	{
		s[i]=s[i]+s[j] - (s[j]=s[i]);
	}

	printf("%s\n",s);

	for(i=0;s[i];i++)
	{
		if(s[i]!=temp[i])
		break;
	}
	if(s[i]==temp[i])
	printf("palidrome\n");
	else
	printf("not palidrome\n");

}
