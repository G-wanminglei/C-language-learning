/*************************************************************************
	> File Name: 1.stderr.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 19 Sep 2024 09:05:20 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    printf("hello world\n");// stdout
    int n;
    scanf("%d", &n);// stdin
    perror("out of rang\n");// stderr
    return 0;
}
