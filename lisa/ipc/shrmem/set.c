#include "header.h"

int main(int argc,char **argv)
{
	int id,ret;
	if(argc!=3)
	{
		printf("usage : ./set semnum val\n");
		return 0;
	}
	id=semget(5,5,IPC_CREAT|0644);
	if(id<0)
		return 0;

	printf("id = %d",id);
	semctl(id,atoi(argv[1]),SETVAL,atoi(argv[2]));

}
