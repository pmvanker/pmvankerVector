#include<stdio.h>
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage : ./a.out filename\n");
		return 0;
	}
	
	FILE *fp;
	
	fp=fopen(argv[1],"r");
	
	fp==0?printf("file is not present\n"):printf("file is present\n");	
return 0;
}
