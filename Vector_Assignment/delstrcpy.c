#include<stdio.h>
#include<string.h>

main()
{
	char s[20],ch;
	printf("Enter the string\n");
	scanf("%s",s);

	printf("Enter the ch\n");
	scanf(" %c",&ch);

	int i;
		
	for(i=0;i<s[i];i++)
	{
		if(s[i]==ch)
		{
			strcpy(s+i,s+i+1);
			i--;
		}
	}
printf("%s\t ch=%c\n",s,ch);
}
