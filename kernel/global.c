// global.c: initiatess the global variables we will use
//
// Authors: Tianyi Huang <tianyih@andrew.cmu.edu>
//          Zixuan Liu <zixuanl@andrew.cmu.edu>
//	    Jianan Lu <jiananl@andrew.cmu.edu>
// Date:    10/23/2013

#include <types.h>

uint32_t oldsp = 0;
uint32_t oldspsr = 0;
uint32_t link = 0 ;

int32_t value = 0 ;
int32_t ExitStatus = 0;

uint64_t system_time = 0;
