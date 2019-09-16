#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	fp=fopen("data","r+");
	if(fp==0)
	{
		printf("file not found\n");
		return 0;
	}

	char ch;
	while((ch=fgetc(fp))!=-1)
	{
		if(ch>>5)
		{
			ch=ch^1<<5;
			fseek(fp,-1,SEEK_CUR);
			fputc(ch,fp);
		}
		else
		{
			ch=ch^1<<5;
			fseek(fp,-1,SEEK_CUR);
			fputc(ch,fp);
		}
        }
}
