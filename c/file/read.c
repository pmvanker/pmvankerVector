#include<stdio.h>
main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out fname\n");
		return;
	}
	
	FILE *fp;
	fp=fopen(argv[1],"r");
	
	if(fp==0)
	{
		printf("File not found\n");
		return;
	}
	printf("file is present\n");
}
