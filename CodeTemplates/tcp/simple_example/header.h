#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/time.h>

/* Plese Define Board here */

#define ARDUINO_NANO

#define ON "ON"
#define OFF "OFF"

#define API_SUSSCESS 0
#define API_FAIL -1

#define TRUE 1
#define FALSE 0
#define BUFFER_SIZE 1024

#define MAXIMUM_CLIENT 30
#define LOCAL_IP "127.0.0.1"
#define PORT 8888

#define KEY_TER "@"
#define VALUE_TER ";"

#ifdef ARDUINO_NANO
#define MSG "MSG"
#define D2 "D2"
#define D3 "D3"
#define D4 "D4"
#define D5 "D5"
#define D6 "D6"
#define D7 "D7"
#define D8 "D8"
#define D9 "D9"
#define D10 "D10"
#define D11 "D11"
#define D12 "D12"
#define D13 "D13"
#define A0 "A0"
#define A1 "A1"
#define A2 "A2"
#define A3 "A3"
#define A4 "A4"
#define A5 "A5"
#define A6 "A6"
#define A7 "A7"
#endif