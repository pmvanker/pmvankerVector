#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

void * thread1(void *p)
{
	char s[20];
	int fdr,fdw;

	fdw=open("f1",O_WRONLY);
	fdr=open("f2",O_RDONLY);
	while(1)
	{
		read(fdr,s,sizeof(s));
		printf("data TH2 : %s \n",s);

		scanf("%s",s);
		write(fdw,s,strlen(s)+1);
	}
}

void * thread2(void *p)
{
	char s[20];
	int fdr,fdw;

	fdr=open("f2",O_WRONLY);
	fdw=open("f1",O_RDONLY);

	while(1)
	{
		read(fdr,s,sizeof(s));
		printf("Data TH1: %s\n",s);

		scanf("%s",s);
		write(fdw,s,strlen(s)+1);
	}
}

int main()
{
	pthread_t th1,th2;
	mkfifo("f1",0644);
	mkfifo("f2",0644);

	pthread_create(&th1,0,thread1,0);
	pthread_create(&th2,0,thread2,0);
	pthread_exit(0);
}
