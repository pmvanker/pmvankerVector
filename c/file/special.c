#include<stdio.h>
main()
{
	FILE *fp;
	char ch;
	fp=fopen("data","r");
	while( (ch=fgetc(fp) ) != EOF)	
	{
		if(ch=='<')
		{
			while((ch=fgetc(fp))!='>')
			printf("%c",ch);
			printf("\n");
		}
	}
}
