/*
 * logging.c
 *
 *  Created on: 28-Apr-2020
 *      Author: pmvanker
 */

#include "logging.h"

ret_e log_file(const char *fname, const int lnum, char *msg)
{
	FILE *logfile = NULL;
	logfile = fopen(LOG_FILE_PATH,"a+");
	if(logfile == NULL){
		printf("logfail\n");
		return FAIL_OPEN_LOGFILE;
	}
	fprintf(logfile,"%s():%d:%s\n",fname,lnum,msg);
	fclose(logfile);
	return SUCCESS;
}

