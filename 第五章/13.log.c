/*************************************************************************
	> File Name: 13.log.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 07 Sep 2024 12:59:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include "define_test_log.h"

int main() {
    int a = 123;
    printf("hello world\n");
    printf("a = %d\n", a);
    LOG(DEBUG)("hello world, DEBUG\n");
    LOG(ERROR)("hello world, ERROR\n");
    LOG(FATAL)("hello worle, FATAL\n");
    LOG(DEBUG)("a = %d, DEBUG\n", a);
    LOG(ERROR)("a = %d, ERROR\n", a);
    LOG(FATAL)("a = %d, FATAL\n", a);
    return 0;
}
