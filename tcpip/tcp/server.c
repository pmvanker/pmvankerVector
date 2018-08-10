#include"header.h"
// SERVER socket() -> bind() -> listen() -> accept() -> read() -> wirte() -> close() 

int main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("usage: ./s portno\n");
		return 0;
	}
	char a[50];
	struct sockaddr_in v,v1;
	int sfd,len,ret,nsfd;
////////////////////////////////////////////////////	SOCKET CREATION
	/* 1 */	sfd =socket(AF_INET,SOCK_STREAM,0);
	if(sfd<0)
	{
		perror("socket");
		return 0;
	}
	perror("socket");
	printf("sfd = %d \n",sfd);
////////////////////////////////////////////////////    BINDING
	/* 2 */
	v.sin_family = AF_INET;
	v.sin_port   = htons(atoi(argv[1]));
	v.sin_addr.s_addr = inet_addr("0.0.0.0");
	len= sizeof(v);

	ret = bind(sfd,(struct sockaddr *)&v,len);
	if(ret<0)
	{
		perror("bind");
		return 0;
	}
	perror("bind");
/////////////////////////////////////////////////////  LISTEN
	listen(sfd,5);
	perror("listen");
/////////////////////////////////////////////////////  ACCEPT
	printf("waiting for client to connect\n");
	nsfd=accept(sfd,(struct sockaddr *)&v1,&len);
	printf("connected\n");

	read(nsfd,a,sizeof(a));
	printf("DATA :%s\n",a);
}
