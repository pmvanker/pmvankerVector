#include "client.h"
/* SERVER socket() -> connect() -> read() -> wirte() -> close() */
int main(int argc, char **argv)
{
    char buffer[BUFFER_SIZE];
    struct sockaddr_in v;
    int sfd, len, ret;

    sfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sfd < 0)
    {
        perror("socket");
        return;
    }
    perror("socket");
    printf("sfd = %d \n", sfd);
    v.sin_family = AF_INET;
    v.sin_port = htons(atoi(argv[2]));
    v.sin_addr.s_addr = inet_addr(argv[1]);
    len = sizeof(v);
    ret = connect(sfd, (struct sockaddr *)&v, len);
    if (ret < 0)
    {
        perror("connect");
        return;
    }
    perror("connect");

    recv(sfd, buffer, strlen(buffer), 0);
    printf("Received Data %s\n", buffer);
}
