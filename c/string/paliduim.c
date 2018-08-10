#include<stdio.h>
main()
{
	int i,j,c;
	char s[20],t[20];
	printf("Enter the string\n");
	scanf("%s",s);

	printf("Revese of String\n");

	for(i=0;s[i];i++);
	for(j=0,i=i-1;i>=0;--i,j++)		//reverse
	t[j]=s[i];
	t[j]='\0';

	printf("sourse : %s and temp = %s \n",s,t);

	for(i=0,c=0;s[i];i++)
	{
		if(s[i]==t[i])
		continue;	
		else
		c++;
	}	
	(c>0)?printf("not palid\n"):printf("palid\n");
	
	printf("\n");


}
