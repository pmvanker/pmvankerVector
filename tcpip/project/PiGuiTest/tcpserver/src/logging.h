/*
 * logging.h
 *
 *  Created on: 28-Apr-2020
 *      Author: pmvanker
 */

#ifndef LOGGING_H_
#define LOGGING_H_

#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

#include "my_error.h"

#define ENTER	"Enter"
#define EXIT	"Exit"

#define LOG_FILE_PATH "logtcpserver"

ret_e log_file(const char *fname, const int lnum, char *msg);



#define DEBUG_LOG(msg) log_file(__func__,__LINE__,msg)

#endif /* LOGGING_H_ */
