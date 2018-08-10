#include<stdio.h>
main()
{
	char s[20],ch;
	int i,j;

	printf("enter the string\n");
	scanf("%s",s);

	printf("enter the charecter\n");
	scanf(" %c",&ch);
	printf("%s\n",s);

	for(i=0;i<s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
			s[j]=s[j+1];
		}
	}	

	printf("%s\n",s);

}
