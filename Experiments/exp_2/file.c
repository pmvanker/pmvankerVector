/* find a string in file and replce it with reverse of it.*/
#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
	if(argc!=2)
	{
		printf("Usage:/a.out string\n");
		return 0;
	}
//////////////////////////////////////////////////////////////////////////
	FILE *fp;
	fp=fopen("data","r+");
	char s[20],a[20],temp;
	strcpy(s,argv[1]);				// geting data from command to arry 
//////////////////////////////////////////////////////////////////////////
	int i=strlen(s),j;	// lenth of string    reverse of string
	for(i=i-1,j=0;i>j;i--,j++)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	int l = strlen(argv[1]);
////////////////////////////////////////////////////////////////////////////////////

	while(fscanf(fp,"%s",a)!=-1)
	{
		if(strcmp(a,argv[1])==0)
		{
			fseek(fp,-l,SEEK_CUR);
			fprintf(fp,"%s",s);
		}
	}
}
