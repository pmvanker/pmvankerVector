#include<stdio.h>
#include<string.h>
main()
{
	char s[5][10],temp[10];
	int i,j;
	printf("Enter Ther strings\n");

	for(i=0;i<5;i++)
	scanf("%s",s[i]);

	printf("--------------\n");
	for(i=0;i<5;i++)
	printf("%s\n",s[i]);

//////////////////////////////////////////////////////////////////
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
		//	if(strcmp(s[j],s[j+1])==1)
			if(strlen(s[j]) > strlen(s[j+1]))
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
	printf("--------------\n");
	for(i=0;i<5;i++)
	printf("%s\n",s[i]);

}
