/*************************************************************************
	> File Name: 11.ifdef.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 05 Sep 2024 10:06:44 PM CST
 ************************************************************************/

#include<stdio.h>

#ifndef DEBUG
#define DEBUG
#endif

#ifdef DEBUG
int a = 1;
#else
int a = 2;
#endif

int main() {
    printf("a = %d\n", a);
    return 0;
}
