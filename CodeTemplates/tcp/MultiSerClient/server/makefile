SHELL = /bin/sh
OBJS =  server.c 
INCLUDE = -I../common/ 
INCLUDE += -I./ 

CFLAG = -Wall -g
CC = gcc
#CC = g++
LIBS = -pthread

all: server
server: 
	${OBJ} ${CC} ${CFLAGS} -o $@ ${OBJS} ${LIBS} ${INCLUDE}
clean:
	-rm -f *.o core *.core server
		
