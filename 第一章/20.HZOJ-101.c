/*************************************************************************
	> File Name: 20.HZOJ-101.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 17 Jul 2024 10:22:24 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, q, b, s, g;
    scanf("%d", &n);
    q = n / 1000;
    b = n % 1000 / 100;
    s = n % 100 / 10;
    g = n % 10;
    printf("%d\n", q + b + s + g);
    return 0;
}
