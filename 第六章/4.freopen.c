/*************************************************************************
	> File Name: 4.freopen.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 19 Sep 2024 09:40:37 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    printf("hello freopen\n");
    char s[1000];
    while (scanf("%[^\n]", s) != EOF) {
        getchar();
        printf("%s | hello world\n", s);
    }
    return 0;
}
