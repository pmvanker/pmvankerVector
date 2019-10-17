/*Write a program to find vowels in a given  string. */
#include<stdio.h>
main()
{
	char s[10],ch[]="aeiou";
	int i,j;
	printf("enter a string \n");
	scanf("%s",s);	

	for(i=0;i<10;i++)
	{
		for(j=0;j<ch[j];j++)
		{
			if(s[i]==ch[j])
			printf("%c\t",s[i]);		
		}
	}
	printf("\n");
}
