#include<stdio.h>
int main(int argc,char **argv)
{
	char ch,op;
	int i,c=0;
	if(argc<3)
	{
		printf("Usage :./a.out sourse des...\n");
		return 0;
	}
	FILE *fp,*fd;
	fp=fopen(argv[1],"r");

	if(fp==0)
	{
		printf("Error : sourse not find\n");
		return 0;
	}
	
	for(i=2;i<argc;i++)
	{
		fd=fopen(argv[i],"r");
		if(fd==0)
		{
	back:	fd=fopen(argv[i],"w");
		c++;
		while((ch=fgetc(fp))!=-1)
			{
				fputc(ch,fd);
			}
		rewind(fp);
		}
		else
		{
		printf("Warning Do you want to overwrite(y/n)? %d\n",c);
		scanf(" %c",&op);
		if(op=='y')
		goto back;
		return 0;
		}
	}
}
