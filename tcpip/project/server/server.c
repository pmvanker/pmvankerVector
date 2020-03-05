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

#define MAX_BUFFER	1024

// Global Varialbla

void *ServerThread(void *ptr)
{
	char client_data[MAX_BUFFER];
	int server_sfd,client_len,server_nsfd,ret;
	struct sockaddr_in server_add,client_add;

/* Socket Creation  */
    server_sfd = socket(AF_INET,SOCK_STREAM,0);
    if(server_sfd < 0)
    {
        perror("Socket"); 
        pthread_exit(NULL);
    }
    perror("Socket"); 

/* Binding Socket with Local Address */
    server_add.sin_family = AF_INET;						//bind
	server_add.sin_port   = htons(atoi((const char*)ptr));
	server_add.sin_addr.s_addr = htonl(INADDR_ANY);
	ret = bind(server_sfd,(struct sockaddr*)&server_add,sizeof(server_add));
    if(ret < 0)
    {
        perror("Bind"); 
        pthread_exit(NULL);
    }
    perror("Bind"); 

/* Listioning to socket */
    ret = listen(server_sfd,1);
    if(ret < 0)
    {
        perror("Listen"); 
        pthread_exit(NULL);
    }
    perror("Listen"); 

/* Accepting Clinet Connection */
    server_nsfd = accept( server_sfd , (struct sockaddr*)&client_add, &client_len);
    if(server_nsfd < 0)
    {
        perror("Accept"); 
        pthread_exit(NULL);
    }
	perror("Accept"); 
        
/* Reading data from socket and Writing to Rx-Fifo */
		
	while(1)
	{
		ret = recv(server_nsfd, client_data, MAX_BUFFER, MSG_DONTWAIT);
		if(ret > 0){
			if(strstr((const char *)client_data,"exit123"))
			{
				pthread_exit(NULL);
			}
			printf("client data: %s\n",client_data);
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
    pthread_create(&ServerThreadID, NULL, ServerThread, argv[1]);   
    pthread_join(ServerThreadID,NULL);
    return 0;
}

