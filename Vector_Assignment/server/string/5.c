/*Write a program to compare two strings without using strcmp function.*/
#include<stdio.h>
main()
{
	int i,c;
	static char s[20],d[20];
	printf("Enter 2 strings\n");
	scanf("%s%s",s,d);

	for(c=0,i=0;i<20;i++)
	{
		if(s[i]!=d[i])
		c++;
	}

	c?printf("not equal\n"):printf("Equal\n");

}
