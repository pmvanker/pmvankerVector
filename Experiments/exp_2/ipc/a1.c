#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
	int p[2];
	pipe(p);
	perror("pipe");
	
	char s[10]="abcdeABCDE";

	write(p[1],s,strlen(s)+1);

	if(fork()==0)
	{//child 1
		char s1[5];
		read(p[0],s1,5);
		printf("child 1 %s \n",s1);
	}
	else
	{// parent
		if(fork()==0)
		{//child2
	//	sleep(2);
		char s2[5];
		read(p[0],s2,5);
		printf("child 2 %s \n",s2);
		}
		else
		{}
	}
}
