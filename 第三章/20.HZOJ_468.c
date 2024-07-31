/*************************************************************************
	> File Name: 20.HZOJ_468.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 31 Jul 2024 08:49:58 PM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int m, int n);

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", gcd(m, n));
    return 0;
}

int gcd(int m, int n) {
    if (n == 0) return m;
    return gcd(n, m % n);
}
