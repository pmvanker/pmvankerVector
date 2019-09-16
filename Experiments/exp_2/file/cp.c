#include<stdio.h>

int main(int argc,char **argv)
{
	if(argc<3)
	{
		printf("usage : ./a.out sfile dfile\n");
		return 0;
	}
	FILE *fd,*fs;
	fs=fopen(argv[1],"r");
	int i;
	for(i=2;i<argc;i++)
	{
		char ch;
		fd=fopen(argv[i],"w");
		while((ch=fgetc(fs))!=-1)
		fputc(ch,fd);

	rewind(fs);
	}
}
