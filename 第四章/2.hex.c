/*************************************************************************
	> File Name: 2.hex.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 05 Aug 2024 08:19:20 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a = 0x6a;
    printf("a(10) = %d\n", a);
    printf("a(16) = %x\n", a);
    printf("a(16) = %X\n", a);
    int int_max = 0x7fffffff;
    int int_min = 0x80000000;
    printf("INT_MAX = %d\n", int_max);
    printf("INT_MIN = %d\n", int_min);
    printf("input hex:");
    scanf("%x", &a);
    printf("a(10) = %d\n", a);
    printf("a(16) = %x\n", a);
    printf("a(16) = %X\n", a);
    return 0;
}
