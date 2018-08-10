#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>

struct msgbuf {
  long mtype;       /* message type, must be > 0 */
  char mydata[10];    /* message data */
};

int main(int argc,char *argv[])
{
	int id;
	struct msgbuf v;

	if(argc!=2)
	{
		printf("usage : ./aout type no\n");
		return 0;
	}

	id=msgget(5,IPC_CREAT|0644);
	perror("msgque");

	printf("id = %d \n",id);
	printf("before....\n");

	msgrcv(id,&v,sizeof(v),atoi(argv[1]),0);
	printf("AFter %s\n",v.mydata);


}
