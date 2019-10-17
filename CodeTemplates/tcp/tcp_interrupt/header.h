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
     
#define API_SUSSCESS        0
#define API_FAIL            -1

#define TRUE                1  
#define FALSE               0  
#define BUFFER_SIZE         1024

#define MAXIMUM_CLIENT      30
#define LOCAL_IP            "127.0.0.1"    
#define PORT                8888

int connect_server(int port, char *ip,void (*ptr)(void));

void my_isr(void);