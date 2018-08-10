#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<string.h>
struct msgbuf
{
	long mtype; 
	char mydata[20];
};

int main(int argc,char *argv[])
{
	int id;
	struct msgbuf v;

	if(argc!=3)
	{
		printf("Usage : ./a.out type msg\n");
		return 0;
	}
	
	id=msgget(5,IPC_CREAT|0644);
	
	perror("msgque");
	
	v.mtype = atoi(argv[1]);
	strcpy(v.mydata,argv[2]);

	msgsnd(id,&v,strlen(v.mydata)+1,0);
	perror("msgsnd");
}
