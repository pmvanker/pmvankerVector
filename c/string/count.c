#include<stdio.h>
main()
{
	char s[10],ch,ch1;
	int ele,i,c=0;

	ele=sizeof(s)/sizeof(s[0]);

	printf("Enter The String ");
	scanf("%[^\n]",s);

	printf("Enter the cherector ");
	scanf(" %c",&ch);
	printf("Enter the cherector ");
	scanf(" %c",&ch1);

	for(i=0,c=0;i<ele;i++)
	{
		if(s[i]==ch)
		{
			s[i]=ch1;
			c++;
		}
	}

	printf("%s\n and %c count %d \n",s,ch,c);
}
