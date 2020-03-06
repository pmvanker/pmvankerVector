#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <sys/resource.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h> /* superset of previous */
#include <arpa/inet.h>
#include <sys/ioctl.h>
#include <pthread.h>
#include <fcntl.h>
#include <errno.h>

#define MAX_BUFFER	1024

// Global Varialbla

int socket_creation(int port)
{
	int master_sfd,ret;
	struct sockaddr_in server_add,client_add;

	/* Socket Creation  */
	master_sfd = socket(AF_INET,SOCK_STREAM,0);

	/* Binding Socket with Local Address */
	server_add.sin_family = AF_INET;						//bind
	server_add.sin_port   = htons(port);
	server_add.sin_addr.s_addr = htonl(INADDR_ANY);
	ret = bind(master_sfd,(struct sockaddr*)&server_add,sizeof(server_add));

	/* Listioning to socket */
	ret = listen(master_sfd,1);
	return master_sfd;
}


void *ServerThread(void *ptr)
{
	char client_data[MAX_BUFFER];
	int server_nsfd, master_sfd, client_len;
	struct sockaddr_in client_add;
	ssize_t ret;
	
	master_sfd = socket_creation(atoi(ptr));

	/* Accepting Clinet Connection */
	server_nsfd = accept( master_sfd , (struct sockaddr*)&client_add, &client_len);
	/* Reading data from socket and Writing to Rx-Fifo */
	while(1)
	{
		ret = recv(server_nsfd, client_data, MAX_BUFFER, MSG_DONTWAIT);
		if(ret > 0){
			printf("client data: %s\n",client_data);
			memset(client_data,0,sizeof(client_data));
		}
		usleep(1);
	}				
}


void *MultiClientServerThread(void *ptr)
{
	char client_data[MAX_BUFFER];
	int server_nsfd, master_sfd, client_len, active_fd;
	struct sockaddr_in client_add;
	ssize_t ret;
	int opt = 1;
	fd_set readfds;

	master_sfd = socket_creation(atoi(ptr));
	
	setsockopt(master_sfd, SOL_SOCKET, SO_REUSEADDR, (char *)&opt,sizeof(opt));

	FD_ZERO(&readfds);
	FD_SET(master_sfd, &readfds);

	while(1)
	{
		active_fd = select(10, &readfds, NULL, NULL ,NULL );
		if(active_fd < 0){
			pthread_exit(NULL);
		}
		if(FD_ISSET(master_sfd, &readfds))
		{
		/* Accepting Clinet Connection */
		server_nsfd = accept( master_sfd , (struct sockaddr*)
				      &client_add, &client_len);
		printf("New connection ip is : %s , port : %d\n" , 
			inet_ntoa(client_add.sin_addr) , ntohs(client_add.sin_port));

		ret = recv(server_nsfd, client_data, MAX_BUFFER, MSG_DONTWAIT);
		if(ret > 0){
			printf("client data: %s\n",client_data);
		}
		}
		usleep(1);
	}
}


int main(int argc, char *argv[])
{
	if(argc !=2)
	{
		printf("USAGE: ./server_bin PORT_NO\n");
		return -1;
	}

	pthread_t ServerThreadID;
//	pthread_t MultiClientServerThreadID;
	/* single client thread */
	pthread_create(&ServerThreadID, NULL, ServerThread, argv[1]);

	/* multiple client thread */	
//	pthread_create(&MultiClientServerThreadID, NULL, MultiClientServerThread, argv[1]);
	
	pthread_join(ServerThreadID,NULL);
//	pthread_join(MultiClientServerThreadID,NULL);
	return 0;
}
