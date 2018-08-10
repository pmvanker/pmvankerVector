#include<stdio.h>
main()
{
	char s[10],d[10];
	int i,j;

	printf("Enter the String:");
	scanf("%[^\n]",s);
	printf("%s\n",s);

	for(i=0;s[i];i++);  //count valid chr in i

	for(j=0,i=i-1   ;i>=0;   i--,j++)
	d[j]=s[i];
	d[j]='\0';

	printf("%s\n",d);
}
