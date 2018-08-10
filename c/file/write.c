#include<stdio.h>
main(int argc,char **argv)
{
	char s[200];
	char ch;
	if(argc!=2)
	{
		printf("Usage:./a.out fname\n");
		return;
	}
	
	FILE *fp;
	fp=fopen(argv[1],"r");
	
	if(fp==0)
	{
	back:	fp=fopen(argv[1],"w");
		printf("Enter the lines\n");
		scanf(" %[^\n]",s);
		fputs(s,fp);
		return;
	}
	else
	{
		printf("file is present Do you want to overwrite(y/n) ?\n");
		ch=getchar();
		if(ch=='y' || ch == 'Y')
		goto back;
		return;
	}	

}

