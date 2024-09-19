/*************************************************************************
	> File Name: 3.fprintf.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 19 Sep 2024 09:27:58 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    fprintf(stdout, "hello world\n");
    int n;
    fscanf(stdin, "%d", &n);
    fprintf(stderr, "n = %d\n", n);
    return 0;
}
