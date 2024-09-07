/*************************************************************************
	> File Name: define_test.h
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 07 Sep 2024 01:10:15 PM CST
 ************************************************************************/

#ifndef _DEFINE_TEST_LOG_H
#define _DEFINE_TEST_LOG_H
#define DEBUG 1
#define ERROR 2
#define FATAL 3
#define NO_LOG 4
#define LOG(level) \
if(level >= LOG_LEVEL) \
printf("[%s : %d]", __FILE__, __LINE__), \
printf
#endif

