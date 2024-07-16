/*************************************************************************
	> File Name: 4.test2.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 04 Jul 2024 09:57:47 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[100];
    scanf("%[^\n]", s);
    int n;
    n = printf("%s", s);
    printf(" : %d\n", n);
    return 0; 
}
