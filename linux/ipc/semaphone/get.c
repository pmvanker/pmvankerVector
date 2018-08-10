#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>

int main(int argc,char* argv[])
{
	int id,ret;

	if(argc!=2)
	{
		printf("Usage : ./get num\n");
		return 0;
	}

	id = semget(5,5,IPC_CREAT|0644);
	perror("semget");

	printf("id = %d \n ",id);

	ret = semctl(id,atoi(argv[1]),GETVAL);
	perror("semctl");

	printf("ret = %d \n",ret);

}

