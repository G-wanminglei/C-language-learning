/*************************************************************************
	> File Name: 19.HZOJ-97-4.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Tue 16 Jul 2024 10:50:00 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    long long sum;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) sum += i + 1;
    printf("%lld\n", sum);
    return 0;
}
