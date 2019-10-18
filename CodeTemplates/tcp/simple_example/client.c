#include "header.h"

int main(int argc, char **argv)
{
	int server_ret = 0;
	struct sockaddr_in v;
	int len, ret, master_socket;
	char buffer[BUFFER_SIZE];

	master_socket = socket(AF_INET, SOCK_STREAM, 0);
	perror("socket");
	v.sin_family = AF_INET;
	v.sin_port = htons(PORT);
	v.sin_addr.s_addr = inet_addr("127.0.0.1");
	len = sizeof(v);

	ret = connect(master_socket, (struct sockaddr *)&v, len);
	perror("connect");
	while (1)
	{
		printf("enter cmd\n");
		scanf(" %[^\n]", buffer);
		send(master_socket, buffer, strlen(buffer), 0);
	}
}
