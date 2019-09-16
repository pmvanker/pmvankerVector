#include<stdio.h>
main()
{
	FILE *fp;
	char ch,ch1;
	fp=fopen("data.c","r");
	if(fp==0)
	{
		printf("filenot found\n");return;
	}
	while( (ch=fgetc(fp) ) != EOF)	
	{
		if(ch==47)
			if( (ch=fgetc(fp) ) == '*')
			{
				while( ((ch=fgetc(fp)) !='*'))
					if(ch!=47)
						continue;
			}
			else
			{
				fseek(fp,-1,SEEK_CUR);
				ch=fgetc(fp);
			}	
		printf("%c",ch);
	}
}
