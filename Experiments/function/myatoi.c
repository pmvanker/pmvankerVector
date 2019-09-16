#include<stdio.h>
int myatoi(char *);
int main(int argc,char **argv)
{
	if(argc!=2)
	{
	printf("type again a.out number\n");
	return 0;
	}
	printf(" %d \n ",myatoi(argv[1]));
}
int myatoi(char *p)
{
	int i,n=0;
	for(i=0;p[i];i++)
		n=n*10+p[i]-48;
	return n;
}
