#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("hello\n");
	execl("/bin/ls","-l",NULL);
	printf("hi\n");
}

