/*************************************************************************
	> File Name: 6.test3.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 17 Jul 2024 08:55:33 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1: printf("one ");
        case 2: printf("two ");
        case 3: printf("three\n"); break;
        default: printf("error\n"); break;
    }
    return 0;
}
