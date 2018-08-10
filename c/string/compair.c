#include<stdio.h>
main()
{
	char s[10],c[10];
	int i,j;

	printf("Enter the String1 and Srting2\n");
	scanf("%s%s",s,c);

	//for full string cheak 

	for(i=0;s[i];i++)
	if(s[i]!=c[i])
	break;
	
	if(s[i]==c[i])
		printf("Equal\n");
	else
		printf("not same\n");


//	for(i=0;s[i];i++)
//	s[i]==c[i]?printf("same "):printf("not same ");
//	printf("\n");
}
