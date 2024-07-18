/*************************************************************************
	> File Name: 11.while.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 18 Jul 2024 08:43:29 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, i = 0;
    scanf("%d", &n);
    printf("program 1:\n");
    while (i < n) {
        printf("%d\n", i + 1);
        i += 1;
    }
    printf("program 2:\n");
    i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i += 1;
    }
    printf("program 3:\n");
    i = 0;
    while (i < n) {
        printf("%d\n", ++i);
    }
    printf("program 4:\n");
    i = 1;
    while (i <= n) {
        printf("%d\n", i++);
    }
    return 0;
}
