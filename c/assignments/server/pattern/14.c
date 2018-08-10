#include<stdio.h>
main()
{
	int i,j;
	char ch;
	
	for(i=0;i<7;i++)
	{
		for(j=i,ch='A';j<7;j++,ch++)
		{
			printf("%c",ch);			
		}


	printf("\n");
	}
}
