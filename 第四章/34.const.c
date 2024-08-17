/*************************************************************************
	> File Name: 34.const.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 16 Aug 2024 11:04:06 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    const int a = 123;
    const int b = 456;
    const int *p1 = &a;//p1指向的值不能改；
    printf("*p1 = %d\n", *p1);
    p1 = &b;
    printf("*p1 = %d\n", *p1);
    int n = 789, m = 1000;
    int *const p3 = &n;//指针不能改；
    return 0;
}
