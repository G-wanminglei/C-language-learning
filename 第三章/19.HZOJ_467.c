/*************************************************************************
	> File Name: 19.HZOJ_467.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 31 Jul 2024 08:42:36 PM CST
 ************************************************************************/

#include<stdio.h>

long long f(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", f(n));
    return 0;
}

long long f(int n) {
    if (n == 1) return 1;
    return n * f(n - 1);
}
