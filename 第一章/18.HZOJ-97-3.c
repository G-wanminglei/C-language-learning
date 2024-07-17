/*************************************************************************
	> File Name: 18.HZOJ-97-3.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Tue 16 Jul 2024 10:04:57 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    long long sum;
    scanf("%d", &n);
    sum = (long long) n * (n + 1)/2;
    printf("%lld\n", sum);
    return 0;
}
