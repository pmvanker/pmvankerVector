#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	if(argc!=4)
	{
	printf("Usage:./a.out fname ch ch\n");
	return 0;
	}
	
	FILE *fp;
	char ch,*p;
	int c=0,i;

	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("File Not found\n");
		return 0;
	}
/////////////////////////////////////////////////////////////////////////////
	while( (ch=fgetc(fp)) != -1 )
	c++;					//size of file
	printf("size of sourse = %dbyte\n",c);
	rewind(fp);				// back to begining
/////////////////////////////////////////////////////////////////////////////
	p=malloc(c+1);				//alocating size
	i=0;
	while( (ch=fgetc(fp)) != -1 )
	p[i++]=ch;
	p[i]='\0';				//copy to string
	rewind(fp);				//back to begining
	printf("%s",p);	
/////////////////////////////////////////////////////////////////////////////
	for(i=0;i<p[i];i++)
	if(p[i]==argv[2][0])
	p[i]=argv[3][0];			// replacement
/////////////////////////////////////////////////////////////////////////////

	fputs(p,fp);
	return 0;
}
