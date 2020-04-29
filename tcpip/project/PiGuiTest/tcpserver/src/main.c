//============================================================================
// Name        : tcpserver.cpp
// Author      : pmvanker
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "server.h"


int main() {
	DEBUG_LOG("ENTER");

	create_tcp_thread();

	pthread_join(ServerThreadID,NULL);
	pthread_join(bluetoothThreadID,NULL);
	pthread_join(wifiThreadID,NULL);
	pthread_join(gpioThreadID,NULL);
	pthread_join(audioThreadID,NULL);
	pthread_join(cameraThreadID,NULL);

	return 0;
}
