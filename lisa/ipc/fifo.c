#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int p[2];
	pipe2(p,O_NONBLOCK);
	char ch='l';
	int c=0;
	while(write(p[1],&ch,1)!=-1)
		c++;
	printf("%d\n",c++);
}
