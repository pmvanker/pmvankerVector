/*Write a Program to remove a Specific line from the given text file.*/
#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	if(argc !=2)
	{
		printf("Usage:./a.out fname\n");
		return;
	}
	FILE *fp;
	int c=0,i;
	char ch,*p;
	fp=fopen(argv[1],"r+");
	
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	
	while( (ch=fgetc(fp)) != -1)
	c++;					//size of the File
	rewind(fp);				// beck to 0

	char s[c][c];				// maximum size


}
