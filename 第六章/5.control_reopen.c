/*************************************************************************
	> File Name: 5.control_reopen.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 19 Sep 2024 09:56:02 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[1000];
    int i = 1;
    while (scanf("%[^\n]", s) != EOF) {
        getchar();
        fprintf(stderr, "%d test case\n", i++);
        printf("%s | hello world\n", s);
    }
    return 0;
}
