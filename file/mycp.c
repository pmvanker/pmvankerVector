#include<stdio.h>

int main(int argc,char **argv)
{
	if(argc<2)
	{
	printf("usage /.a.out file1 file2 \n");
	return 0;
	}
	
FILE *fd,*fp;

	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		perror("fopen");
		return 0;
	}
	int i;
	for(i=2;i<argc;i++)
	{
		char ch;
		fd=fopen(argv[i],"w");
		while((ch=fgetc(fp))!=EOF)
			fputc(ch,fd);
		rewind(fp);
	}
}
