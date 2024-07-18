/*************************************************************************
	> File Name: 12.do_while.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 18 Jul 2024 09:09:08 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, i = 0;
    scanf("%d", &n);
    printf("program 1:\n");
    do {
        printf("%d\n", ++i);
    } while (i < n);
    printf("program 2:\n");
    i = 1;
    do {
        printf("%d\n", i++);
    } while (i <= n);
    return 0;
}
