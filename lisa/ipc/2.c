#include"header.h"
int main()
{
char s[20];
int fd;
fd=open("data",O_WRONLY);
perror("open");
printf("enter the data..\n");
scanf("%s",s);
write(fd,s,strlen(s)+1);
}
