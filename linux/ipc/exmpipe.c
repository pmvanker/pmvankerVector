#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int p[2];
	pipe(p);
	perror("pipe");
	char d[10]="praful1234";
	write(p[1],d,10);

	if(fork()==0)
	{
		int i;
		char d1[5];
		printf("child 1\n");
		read(p[0],d1,5);
		for(i=0;i<5;i++)
			printf("%c ",d1[i]);
	}
	else
	{
		if(fork()==0)
		{
			int i;
			char d1[5];
			printf("child 2\n");
			read(p[0],d1,5);
				for(i=0;i<5;i++)
					printf("%c ",d1[i]);
		}
	}

}

