/*Write a program to find the no.of times the character is found in a given string. */
#include<stdio.h>
main()
{
	char s[10],ch;
	int i,c;
	printf("enter a string \n");
	scanf("%s",s);	
	printf("enter a charcter \n");	
	scanf(" %c",&ch);

	for(c=0,i=0;i<10;i++)
	{
		if(s[i]==ch)
		c++;
	}

	printf("%s charecter %c %d times ocurance\n",s,ch,c);



}
