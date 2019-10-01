SHELL = /bin/sh
OBJS =  client.c 
INCLUDE = -I../common/ 
CFLAG = -Wall -g
CC = gcc
#CC = g++
LIBS = -pthread

all: client
client: 
	${OBJ} ${CC} ${CFLAGS} -o $@ ${OBJS} ${LIBS} ${INCLUDE}
clean:
	-rm -f *.o core *.core client
		
