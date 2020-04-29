/*
 * server.c
 *
 *  Created on: 28-Apr-2020
 *      Author: pmvanker
 */
#include "server.h"

pthread_t ServerThreadID;
pthread_t bluetoothThreadID;
pthread_t wifiThreadID;
pthread_t gpioThreadID;
pthread_t audioThreadID;
pthread_t cameraThreadID;

int server_nsfd, master_sfd;


int socket_creation(int port)
{
	DEBUG_LOG("ENTER");

	int master_sfd;
	struct sockaddr_in server_add;

	/* Socket Creation  */
	master_sfd = socket(AF_INET,SOCK_STREAM,0);

	/* Binding Socket with Local Address */
	server_add.sin_family = AF_INET;						//bind
	server_add.sin_port   = htons(port);
	server_add.sin_addr.s_addr = htonl(INADDR_ANY);

	bind(master_sfd,(struct sockaddr*)&server_add,sizeof(server_add));

	/* Listioning to socket */
	listen(master_sfd,1);
	return master_sfd;
	DEBUG_LOG("EXIT");

}

int get_test_no(const char *data){
	if( strcmp(BLUETOOTH,data) == 0){
		return BLUETOOTH_TEST;
	}else if( strcmp(WIFI,data) == 0){
		return WIFI_TEST;
	}else if( strcmp(GPIO,data) == 0){
		return GPIO_TEST;
	}else if( strcmp(AUDIO,data) == 0){
		return AUDIO_TEST;
	}else if( strcmp(CAMERA,data) == 0){
		return CAMERA_TEST;
	}else if( strcmp(VIDEOSTREAM,data) == 0){
		return VIDEO_STREAM_TEST;
	}else if( strcmp(TWIFI,data) == 0){
		return TWIFI_TEST;
	}else if( strcmp(TGPIO,data) == 0){
		return TGPIO_TEST;
	}else if( strcmp(TAUDIO,data) == 0){
		return TAUDIO_TEST;
	}else if( strcmp(TCAMERA,data) == 0){
		return TCAMERA_TEST;
	}else if( strcmp(TVIDEOSTREAM,data) == 0){
		return TVIDEO_STREAM_TEST;
	}else if( strcmp(TBLUETOOTH,data) == 0){
		return TBLUETOOTH_TEST;
	}
	return FAIL;
}


void *SocketReadThread(void *ptr)
{
	DEBUG_LOG("ENTER");
	socklen_t client_len;
	struct sockaddr_in client_add;
	ssize_t ret;
	char client_data[MAX_BUFFER];
	int test_no = 0;
	master_sfd = socket_creation(SERVER_PORT);

	/* Accepting Client Connection */
	server_nsfd = accept( master_sfd , (struct sockaddr*)&client_add, &client_len);

	while(1)
	{
		memset(client_data,0,sizeof(client_data));
		ret = recv(server_nsfd, client_data, MAX_BUFFER, MSG_DONTWAIT);
		if(ret > 0){
			printf("client data: %s\n",client_data);
			DEBUG_LOG(client_data);
			test_no =  get_test_no(client_data);

			switch(test_no)
			{
			case BLUETOOTH_TEST:
				ble_test();
				break;

			case WIFI_TEST:
				wifi_test();
				break;

			case GPIO_TEST:
				gpio_test();
				break;

			case AUDIO_TEST:
				audio_test();
				break;

			case CAMERA_TEST:
				camera_test();
				break;

			case VIDEO_STREAM_TEST:
				videostream_test();
				break;

			case TBLUETOOTH_TEST:
				pthread_create(&bluetoothThreadID, NULL, SocketReadThread,NULL);
				break;

			case TWIFI_TEST:
				pthread_create(&wifiThreadID, NULL, SocketReadThread,NULL);
				break;

			case TGPIO_TEST:
				pthread_create(&gpioThreadID, NULL, SocketReadThread,NULL);
				break;

			case TAUDIO_TEST:
				pthread_create(&audioThreadID, NULL, SocketReadThread,NULL);
				break;

			case TCAMERA_TEST:
				pthread_create(&cameraThreadID, NULL, SocketReadThread,NULL);
				break;

			default:DEBUG_LOG("CMD NOT FOUND");
			}

			memset(client_data,0,sizeof(client_data));
		}
		usleep(1);
	}
	DEBUG_LOG("EXIT");
}

ret_e create_tcp_thread()
{
	DEBUG_LOG("ENTER");
	pthread_create(&ServerThreadID, NULL, SocketReadThread,NULL);
	DEBUG_LOG("EXIT");
	return SUCCESS;
}

