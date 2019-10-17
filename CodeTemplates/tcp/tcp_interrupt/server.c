#include "header.h"
// SERVER socket() -> bind() -> listen() -> accept() -> read() -> wirte() -> close()

#define WELCOME "welcome to tcp server"

int main(int argc, char **argv)
{
	char buffer[BUFFER_SIZE] = {0};
	char ch;
	struct sockaddr_in v, v1;
	int sfd, len, ret, nsfd, i;
	char tik[5] = {0};
	int tikno = 0;
	sfd = socket(AF_INET, SOCK_STREAM, 0);
	perror("socket");

	v.sin_family = AF_INET;
	v.sin_port = htons(PORT);
	v.sin_addr.s_addr = INADDR_ANY;
	len = sizeof(v);

	ret = bind(sfd, (struct sockaddr *)&v, len);
	perror("bind");

	listen(sfd, 5);
	perror("listen");

	nsfd = accept(sfd, (struct sockaddr *)&v1, &len);

	do
	{
		for (i = 0; i < 5; i++)
		{
			sprintf(tik, "%d", tikno++);
			send(nsfd, tik, strlen(tik) + 1, 0);
			sleep(1);
		}
		printf("Do you want to send more packets ?\n");
		scanf(" %c",&ch);
	} while (ch == 'y');
}
