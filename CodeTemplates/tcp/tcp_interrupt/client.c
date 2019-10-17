#include "header.h"
int master_socket;
char buffer[BUFFER_SIZE];

void my_isr(void)
{
	printf("ISR\n");
}

int connect_server(int port, char *ip, void (*ptr)(void))
{
	struct sockaddr_in v;
	int len, ret;

	master_socket = socket(AF_INET, SOCK_STREAM, 0);
	if(master_socket < API_SUSSCESS)
	{
		perror("socket");
		return API_FAIL;
	}
	printf("Master Socket Created id = %d\n", master_socket);

	v.sin_family = AF_INET;
	v.sin_port = htons(PORT);
	v.sin_addr.s_addr = inet_addr("127.0.0.1");
	len = sizeof(v);

	ret = connect(master_socket, (struct sockaddr *)&v, len);
	if(ret < API_SUSSCESS)
	{
		perror("connect");
		return API_FAIL;
	}	
	printf("connected to server\n");
	if(fork() == 0)
	{
		while(1)
		{
			ret = recv(master_socket,buffer,sizeof(buffer),0);
			if(ret > 0)
			{
				my_isr();
			}
		}
	}
	return API_SUSSCESS;
}

int main(int argc, char **argv)
{
	int server_ret = 0;
	server_ret = connect_server(PORT, LOCAL_IP, my_isr);
	while (1)
	{
		printf("******************\n");
		printf("* PARENT PROCESS * \n");
		printf("******************\n");
		sleep(4);
	}
}
