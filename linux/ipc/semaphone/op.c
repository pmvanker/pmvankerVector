#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc,char* argv[])
{
	int id,i,fd;
	struct sembuf v;

	char s[]="abcdefghij";

	fd = open("data",O_RDWR|O_APPEND|O_CREAT|0644);
	perror("file");

	id = semget(5,5,IPC_CREAT|0644);
	perror("semget");

	v.sem_num = 2;
	v.sem_op = 0;
	v.sem_flg = 0;

	printf("before \n");

//	semop(id,&v,1);
//	perror("semop");

	semctl(id,2,SETVAL,1);
	perror("semctl");

	printf("after \n");

	for(i=0;s[i];i++)
	{
		write(fd,&s[i],1);
	//	sleep(1);
	}

	semctl(id,2,SETVAL,0);
	perror("senctl");
}

