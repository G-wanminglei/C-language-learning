/*************************************************************************
	> File Name: 12.if_function.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 05 Sep 2024 10:22:53 PM CST
 ************************************************************************/

#include<stdio.h>

#ifdef CLOCK
void test1() {
    printf("this is test1\n");
    return ;
}
#endif

#ifdef PHONE
void test2() {
    printf("this is test2\n");
    return ;
}
#endif

int main() {
#ifdef CLOCK
    test1();
#endif
#ifdef PHONE
    test2();
#endif
    return 0;
}
