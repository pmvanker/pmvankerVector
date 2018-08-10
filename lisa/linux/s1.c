#include<stdio.h>
#include<signal.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
void myisr(int n)
{
	printf("in ISR\n");
	FILE *fd;

	fopen("data","r+");
	char ch;
	while((ch=fgetc(fd))!=EOF)
	{
		if((ch>='a') || (ch<='z'))
		{
			ch=ch-32;
			fseek(fd,-1,SEEK_CUR);
			fputc(ch,fd);
		}
	}
	fclose(fd);
	signal(SIGUSR1,SIG_DFL);
	printf("file edited\n");
}
int main()
{
	FILE *fp;
	int pid;
	fp=fopen("data","w");
	perror("fopen");

	if(pid=fork())
	{//parent
		char s[100];
		printf("Enter data\n");
		scanf("%[^\n]",s);

		printf("enter data in to file \n................\n%s\n",s);
		int i=0;
		while(fputs(s,fp)<0);
		
		fclose(fp);
		kill(pid,SIGUSR1);
		while(wait(0)!=-1);
	}
	else
	{//child
		signal(SIGUSR1,myisr);
		pause();
		exit(0);
	}
}
