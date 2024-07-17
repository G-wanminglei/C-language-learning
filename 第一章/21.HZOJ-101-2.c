/*************************************************************************
	> File Name: 21.HZOJ-101-2.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 17 Jul 2024 10:28:41 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char n[10];
    int q = 0, b = 0, s = 0, g = 0;
    scanf("%s", n);
    sscanf(n, "%1d%1d%1d%1d", &q, &b, &s, &g);
    printf("%d\n", q + b + s + g);
    return 0;
}
