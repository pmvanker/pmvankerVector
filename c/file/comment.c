#include<stdio.h>
main()
{
//	main1();
	FILE *fp;
	char ch;
	fp=fopen("data.c","r");
	while( (ch=fgetc(fp) ) != EOF)	
	{
		if(ch==47)
		{
			if( (ch=fgetc(fp)) ==47 )
			while((ch=fgetc(fp))!='\n');
			else
			{
				fseek(fp,-1,SEEK_CUR);
				ch=47;	
			}
		}
			printf("%c",ch);
	}
}

