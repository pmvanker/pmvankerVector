#include<stdio.h>
main()
{
	char s[500];
	int i,j,k;
	printf("Enter the line\n");
	scanf("%[^\n]",s);

	printf("%s\n",s);

	for(i=0;s[i];i++)
	{
		if(s[i]==' ' && s[i+1]==' ')
		{
			for(j=i;s[j];j++)
			s[j]=s[j+1];
		i--;
		}
		
	}	

	printf("%s\n",s);

}
