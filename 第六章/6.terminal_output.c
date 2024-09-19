/*************************************************************************
	> File Name: 6.terminal_output.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 19 Sep 2024 10:14:06 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    freopen("/dev/pts/2", "w", stdout);
    char s[1000];
    while(scanf("%s", s) != EOF) {
        printf("from /dev/pts/0 : %s\n", s);
    }
    return 0;
}
