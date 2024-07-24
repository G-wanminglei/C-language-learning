/*************************************************************************
	> File Name: 30.HZOJ_130.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 24 Jul 2024 09:21:34 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int m, n;
    double yu = 0;
    scanf("%d%d", &m, &n);
    for (int i = 0;i < n;i++) {
        yu += m;
        yu *= 1.00417;
    }
    printf("$%.2lf\n", yu);
    return 0;
}
