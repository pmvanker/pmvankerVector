#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	char s[20];
	int fd;
	
	mkfifo("lipi",0644);
	perror("mkfifo");
    	printf("before...\n");
	fd=open("lipi",O_WRONLY);
	printf("after..\n");

	while(1)
	{
        printf("enter teh data");
	scanf(" %s",s);
	write(fd,s,sizeof(s));
	}
}
