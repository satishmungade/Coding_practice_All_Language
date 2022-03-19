#ifndef _LOG_H
#define _LOG_H
#include <stdio.h>
#define ON		1
#define OFF		0
#define LOG     ON

#define DEBUG_MAIN  		LOG
#define DEBUG_ADDITION		LOG

FILE *pLogFile = NULL;
void CreateLog(FILE **);

#endif