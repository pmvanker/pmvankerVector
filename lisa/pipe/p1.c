
#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main()
{
	int p[2];			//p[0] read end, p[1] write end
	pipe(p);
	perror("pipe");

	if(fork())
	{//parent
		char s[20];
		printf("hii heroin type your name\n");
		scanf("%s",s);
		write(p[1],s,strlen(s)+1);
	}
	else
	{//child
		char l[20];
		read(p[0],l,sizeof(l));	
		printf("child pipe return %s \n",l);
	}

//printf("pmvanker\n");
}
