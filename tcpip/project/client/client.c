// TCP Client program 
#include <netinet/in.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <sys/socket.h> 
#include <sys/types.h> 
#include <arpa/inet.h>
#include <unistd.h>

#define MAXLINE 1024 
int main(int argc, char *argv[]) 
{ 
	if(argc!=3)
	{
		printf("USAGE: ./clinet_bin ip port\n");
		return -1;
	}
	int sockfd; 
	char buffer[MAXLINE]; 
	struct sockaddr_in servaddr; 

	int n, len; 
	// Creating socket file descriptor 
	if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) { 
		printf("socket creation failed"); 
		exit(0); 
	} 

	memset(&servaddr, 0, sizeof(servaddr)); 

	// Filling server information 
	servaddr.sin_family = AF_INET; 
	servaddr.sin_port = htons(atoi(argv[2])); 
	servaddr.sin_addr.s_addr = inet_addr(argv[1]); 

	if (connect(sockfd, (struct sockaddr*)&servaddr, 
							sizeof(servaddr)) < 0) { 
		printf("\n Error : Connect Failed \n"); 
	} 

	memset(buffer, 0, sizeof(buffer)); 
	 
	while(1)
	{
		static unsigned int counter;
		sprintf(buffer,"msg no %d",counter++);
		send(sockfd, buffer, strlen(buffer), MSG_DONTWAIT);
		sleep(1);
	}	
 
	close(sockfd); 
} 

