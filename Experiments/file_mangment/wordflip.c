#include<stdio.h>
#include<string.h>
int main(int argc,char **argv)
{
	int i,j,l;
	char s[20],a[20],temp;
	FILE *fp;
	if(argc!=3)
	{
		printf("Usage:./a.out fname string\n");
		return 0;
	}
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("file not found\n");
		return 0;
	}
	strcpy(s,argv[2]);
	i=strlen(s);
	for(i=i-1,j=0 ; i>j ; i--,j++)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	l=strlen(argv[2]);
	while(fscanf(fp,"%s",a)!=-1)
	{
		if(strcmp(a,argv[2])==0)
		{
			fseek(fp,-l,SEEK_CUR);
			fprintf(fp,"%s",s);
		}
	}
	return 0;	
}
