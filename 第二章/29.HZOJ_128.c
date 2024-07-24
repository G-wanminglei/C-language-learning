/*************************************************************************
	> File Name: HZOJ.128.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 24 Jul 2024 07:29:53 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, x;
    double sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
    }
    printf("%.2lf\n", sum / n);
    return 0;
}
