#include<stdio.h>
main()
{
	char s[20],d[20];
	int k,i,j,c=0;
	printf("Enter the String\n");
	scanf("%s",s);
	
	for(k=0;s[k];k++);

	for(i=k-1,j=0;i>=0;i--,j++)	//reverse string
	d[j]=s[i];
	
//	for(i=0;i<5;i++)
//	printf("%c",d[i]);
//	printf("\n");	

	for(i=0;i<k;i++)
	{
		if(d[i]==s[i])
		continue;
		else
		c++;	
	}
	if(c>0)
	printf("not palidrom\n");
	else
	printf("palidrom\n");	
}
