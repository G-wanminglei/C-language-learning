/*************************************************************************
	> File Name: 22.HZOJ-102.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 17 Jul 2024 11:47:24 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    double a, b, c, t;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &t);
    double rest = 1.0 - (1.0 / a + 1.0 / b) * t;
    double t1 = rest / (1.0 / a + 1.0 / b - 1.0 / c);
    printf("%.2lf\n", t1 + t);
    return 0;
}
