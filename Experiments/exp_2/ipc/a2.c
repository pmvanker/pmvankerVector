#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
	int p[2];
	pipe(p);
	perror("pipe");
	
	char s[10]="helloworld";
	
	write(p[1],s,strlen(s)+1);
	
	if(fork()==0)
	{//child1
	char s1[5];
	   read(p[0],s1,5);
	   printf("child1 is %s",s1);
	}
	else
	{//parent
	if(fork()==0)
		{//child2
		 char s2[5];
		read(p[0],s2,5);
		printf("child2 is %s",s2);
		}
		else
		{//parent
		}

	}
}
