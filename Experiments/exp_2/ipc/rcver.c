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
	fd=open("lipi",O_RDONLY);
	while(1)
	{
	read(fd,s,sizeof(s));
	printf("%s \n",s);
	}
}
