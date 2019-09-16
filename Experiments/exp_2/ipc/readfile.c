#include"header.h"

int main()
{
	char s[50];
	int fd;
	fd=open("data",O_RDONLY);
	perror("open");

	read(fd,s,sizeof(s));

	printf("%s\n",s);
}
