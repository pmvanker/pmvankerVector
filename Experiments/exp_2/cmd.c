// ls cal pwd
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char **argv)
{
	if(fork==0)
	{//child 1

		execl("/bin/ls","ls","-l",NULL);
	}
	else
	{// parent
		execl("/bin/pwd","pwd",NULL);
	}
}
