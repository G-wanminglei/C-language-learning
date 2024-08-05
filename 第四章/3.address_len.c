/*************************************************************************
	> File Name: 3.address_len.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 05 Aug 2024 08:35:29 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a;
    double b;
    char c;
    printf("sizeof(int &) = %lu\n", sizeof(&a));
    printf("sizeeof(double &) = %zu\n", sizeof(&b));
    printf("sizeof(char &) = %zu\n", sizeof(&c));
    return 0;
}
