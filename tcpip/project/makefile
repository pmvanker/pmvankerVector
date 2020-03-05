SERVER = ./server/server.c 
CLIENT = ./client/client.c 
CFLAG = -Wall
CC = gcc
LIBS = -pthread

all: server_bin client_bin
server_bin: ${SERVER}
	   ${CC} ${CFLAGS} -o $@ ${SERVER} ${LIBS} 
client_bin: ${CLIENT}
	   ${CC} ${CFLAGS} -o $@ ${CLIENT} ${LIBS} 
clean:
	   -rm -f *.o core *.core server_bin client_bin
.cpp.o:
	   ${CC} ${CFLAGS} -c $<
