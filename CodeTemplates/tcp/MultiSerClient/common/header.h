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
     
#define TRUE   1  
#define FALSE  0  
#define PORT 8888 
#define MAXIMUM_CLIENT      30
#define BUFFER_SIZE         1024
