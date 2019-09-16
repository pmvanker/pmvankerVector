#include "header.h"

int main(int argc,char *argv[])
{
	int id,ret;

	if(argc!=2)
	{
		printf("usage:./get num\n");
		return 0;
	}
	
	id=semget(5,5,IPC_CREAT|0644);
	if(id<0)
		return 0;

	printf("id = %d \n",id);

	ret=semctl(id,atoi(argv[1]),GETVAL);

	printf("ret =%d\n",ret); 
}
