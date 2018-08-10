#include<stdio.h>
main(int argc,char **argv)
{
	char ch,ch1;
	if(argc!=3)
	{
		printf("Usage:./a.out Sourse Destination\n");
		return;
	}
	
	FILE *fp,*d;
	fp=fopen(argv[1],"r");
	
	if(fp==0)
	{
		printf("Error : sourse not present\n");
		return;
	}
	d=fopen(argv[2],"r");
	if(d==0)
	{
	back:	d=fopen(argv[2],"w");
		while( (ch1=fgetc(fp)) != -1)
		{
			fputc(ch1,d);
		}
	printf("copy done\n");
	return;
	}
	else
	{
		printf("Warrning: Do you want to Overwrite (y/n) ?\n");
		ch=getchar();
		if(ch=='y')
		goto back;
	}
	printf("copy cancle\n");
}

