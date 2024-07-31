/*************************************************************************
	> File Name: 14.HZOJ_465.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 31 Jul 2024 12:43:53 PM CST
 ************************************************************************/

#include<stdio.h>

int digit(long long n, int k) {
    if (k == 1) return n % 10;
    return digit(n / 10, k - 1);
}

int main() {
    long long n;
    int k;
    scanf("%lld %d", &n, &k);
    printf("%d\n", digit(n, k));
    return 0;
}
