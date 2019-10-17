SHELL = /bin/sh
CLIENT =  client.c 
SERVER =  server.c 
INCLUDE = -I../common/ 
CFLAG = -Wall -g
CC = gcc

LIBS = -pthread

all: client server
client: 
	${CC} ${CLIENT} ${CFLAGS} -o $@ ${LIBS} ${INCLUDE}
server:
	${CC} ${SERVER} ${CFLAGS} -o $@ ${LIBS} ${INCLUDE}
clean:
	-rm -f *.o core *.core client server
		
