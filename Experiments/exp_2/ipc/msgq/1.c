#include "header.h"
struct msgbuf
{
	long mtype;
	char data[10];
};

int main(int argc,char *argv[])
{
	int id;
	struct msgbuf v;

	if(argc!=3)
	{
		printf("Usage : ./snd type msg\n");
		return 0;
	}
	
	id = msgget(10,IPC_CREAT|0644); /// this pos msg q get created key 5 id send by fun
	if(id<0)
	{
		perror("msgget");
		return 0;
	}

	printf("msg id = %d \n",id); // succesful msg q created id = xyz
	
	v.mtype=atoi(argv[1]);
	strcpy(v.data,argv[2]);

	msgsnd(id,&v,strlen(v.data)+1,0);
	perror("msgsnd");

}
