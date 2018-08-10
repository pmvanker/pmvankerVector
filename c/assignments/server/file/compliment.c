/* Write a Program to Convert Lower to Upper and Upper to Lower Cases of a given file*/
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
	/////////////////////////////////////////////////////////////////////////
	p=malloc(c+1);				//dynamic alocation
	///////////////////////////////////////////////////////////////////////
	i=0;
	while( (ch=fgetc(fp)) != -1)
	p[i++]=ch;
	p[i]='\0';
	printf("%s",p);				// copy 2 own array & print
	rewind(fp);				// back to 0;
	///////////////////////////////////////////////////////////////////////
	for(i=0;p[i];i++)
	{
		if( (p[i]>='A') && (p[i]<='z') )
		p[i]=p[i]^1<<5;				// compliment
	}
	////////////////////////////////////////////////////////////////////
	printf("after compliment \n");
	printf("%s",p);
	////////////////////////////////////////////////////////////////////
	fputs(p,fp);

}
