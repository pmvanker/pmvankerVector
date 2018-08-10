#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main()
{
	int P[2];
	char d[20]={};
	pipe(P);
	perror("pipe");

	if(fork())
	{//parent
		printf("in parrent type something\n");
		scanf("%s",d);
		write(P[1],d,strlen(d)+1);
	}	
	else
	{// child
		printf("in child reading from pipe\n");
		read(P[0],d,sizeof(d));
		int i;
		for(i=0;d[i];i++)
		{
		if((d[i]>>5)==1)
			d[i]-=32;
		}
		printf("%s\n",d);
	}

}	
