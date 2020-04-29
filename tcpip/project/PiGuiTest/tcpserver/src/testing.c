/*
 * testing.c
 *
 *  Created on: 28-Apr-2020
 *      Author: pmvanker
 */
#include "testing.h"

ret_e ble_test(){
	DEBUG_LOG(ENTER);
	char result[STR_BUFFER];
	memset(result,0,sizeof(result));

	strcpy(result,PASS);
	send(server_nsfd,result,sizeof(result),NULL);
	DEBUG_LOG(EXIT);
	return SUCCESS;
}

ret_e wifi_test(){
	DEBUG_LOG(ENTER);
	char result[STR_BUFFER];
	memset(result,0,sizeof(result));

	strcpy(result,PASS);
	send(server_nsfd,result,sizeof(result),NULL);

	DEBUG_LOG(EXIT);
	return SUCCESS;
}

ret_e gpio_test(){
	DEBUG_LOG(ENTER);
	char result[STR_BUFFER];
	memset(result,0,sizeof(result));

	strcpy(result,PASS);
	send(server_nsfd,result,sizeof(result),NULL);

	DEBUG_LOG(EXIT);
	return SUCCESS;
}

ret_e audio_test(){
	DEBUG_LOG(ENTER);
	char result[STR_BUFFER];
	memset(result,0,sizeof(result));

	strcpy(result,PASS);
	send(server_nsfd,result,sizeof(result),NULL);

	DEBUG_LOG(EXIT);
	return SUCCESS;
}

ret_e camera_test(){
	DEBUG_LOG(ENTER);
	char result[STR_BUFFER];
	memset(result,0,sizeof(result));

	strcpy(result,PASS);
	send(server_nsfd,result,sizeof(result),NULL);

	DEBUG_LOG(EXIT);
	return SUCCESS;
}

ret_e videostream_test(){
	DEBUG_LOG(ENTER);
	char result[STR_BUFFER];
	memset(result,0,sizeof(result));

	strcpy(result,FAIL);
	send(server_nsfd,result,sizeof(result),NULL);

	DEBUG_LOG(EXIT);
	return SUCCESS;
}

void *blutoothTestThread(void *ptr){
	DEBUG_LOG(ENTER);
	ble_test();
	DEBUG_LOG(EXIT);
	return NULL;
}

void *wifiTestThread(void *ptr){
	DEBUG_LOG(ENTER);
	wifi_test();
	DEBUG_LOG(EXIT);
	return NULL;
}

void * gpioTestThread(void *ptr){
	DEBUG_LOG(ENTER);
	gpio_test();
	DEBUG_LOG(EXIT);
	return NULL;
}

void * audioTestThread(void *ptr){
	DEBUG_LOG(ENTER);
	audio_test();
	DEBUG_LOG(EXIT);
	return NULL;
}

void * cameraTestThread(void *ptr){
	DEBUG_LOG(ENTER);
	camera_test();
	DEBUG_LOG(EXIT);
	return NULL;
}
