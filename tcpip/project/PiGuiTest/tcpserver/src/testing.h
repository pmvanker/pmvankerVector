/*
 * testing.h
 *
 *  Created on: 28-Apr-2020
 *      Author: pmvanker
 */

#ifndef TESTING_H_
#define TESTING_H_


#include "logging.h"
#include "my_error.h"

#include <sys/socket.h>

extern int server_nsfd;

enum test_cases{
	BLUETOOTH_TEST,
	WIFI_TEST,
	GPIO_TEST,
	AUDIO_TEST,
	CAMERA_TEST,
	VIDEO_STREAM_TEST,
	TBLUETOOTH_TEST,
	TWIFI_TEST,
	TGPIO_TEST,
	TAUDIO_TEST,
	TCAMERA_TEST,
	TVIDEO_STREAM_TEST,
};

#define BLUETOOTH		"bluetooth"
#define WIFI			"wifi"
#define GPIO			"gpio"
#define AUDIO			"audio"
#define CAMERA			"camera"
#define VIDEOSTREAM		"videostream"

#define TBLUETOOTH		"tbluetooth"
#define TWIFI			"twifi"
#define TGPIO			"tgpio"
#define TAUDIO			"taudio"
#define TCAMERA			"tcamera"
#define TVIDEOSTREAM	"tvideostream"

#define PASS			"pass"
#define FAIL		    "fail"

#define STR_BUFFER		5

ret_e ble_test();
ret_e wifi_test();
ret_e gpio_test();
ret_e audio_test();
ret_e camera_test();
ret_e videostream_test();


void * blutoothTestThread(void *ptr);
void * wifiTestThread(void *ptr);
void * gpioTestThread(void *ptr);
void * audioTestThread(void *ptr);
void * cameraTestThread(void *ptr);


#endif /* TESTING_H_ */
