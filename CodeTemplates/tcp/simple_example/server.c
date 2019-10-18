#include "header.h"
// SERVER socket() -> bind() -> listen() -> accept() -> read() -> wirte() -> close()

int main(int argc, char **argv)
{
	char buffer[BUFFER_SIZE] = {0};
	char ch;
	struct sockaddr_in v, v1;
	int sfd, len, ret, nsfd, i;
	char tik[5] = {0};
	int tikno = 0;

	char *temp_str = NULL;
	char *key = NULL;
	char *value = NULL;

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

	/* $ - DATA - & */
	while (1)
	{
		ret = recv(nsfd, buffer, sizeof(buffer), 0);
		printf("%s\n", buffer);
		if (ret > 0)
		{
			printf("%s", buffer);
			len = strlen(buffer) - 1;
			if (buffer[len] != ';')
			{
				printf("1. Data Frame Wrong\n");
			}

			temp_str = malloc(len);
			strcpy(temp_str, buffer);

			key = strtok(buffer, KEY_TER);
			value = strtok(NULL, VALUE_TER);

			printf(" key = %s\n", key);
			printf(" value = %s\n", value);

			if (temp_str[strlen(key)] != '@')
			{
				printf("2. data formate Wrong\n");
			}

			if (temp_str)
			{
				free(temp_str);
				temp_str = NULL;
			}

			if (strcmp(key, MSG) == 0)
			{
				printf("%s\n", value);
			}
			else if (strcmp(key, D2) == 0)
			{
				if (strcmp(value, ON) == 0)
				{
					printf("D2:ON\n");
				}
				else if (strcmp(value, OFF) == 0)
				{
					printf("D2:OFF\n");
				}
			}
		}
	}
}
