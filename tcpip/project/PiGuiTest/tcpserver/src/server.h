/*
 * server.h
 *
 *  Created on: 28-Apr-2020
 *      Author: pmvanker
 */

#ifndef SERVER_H_
#define SERVER_H_

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

#include "my_error.h"
#include "logging.h"
#include "testing.h"

#define MAX_BUFFER	50
#define SERVER_PORT 3000

extern pthread_t ServerThreadID;
extern pthread_t bluetoothThreadID;
extern pthread_t wifiThreadID;
extern pthread_t gpioThreadID;
extern pthread_t audioThreadID;
extern pthread_t cameraThreadID;


int socket_creation(int port);
void *SocketReadThread(void *ptr);
ret_e create_tcp_thread();
int get_test_no(const char *data);


#endif /* SERVER_H_ */
