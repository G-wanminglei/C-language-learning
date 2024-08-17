/*************************************************************************
	> File Name: 38.test3.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 16 Aug 2024 09:56:52 PM CST
 ************************************************************************/

#include<stdio.h>

typedef double (*FUNC_T)(double);

double min(double a, double b) {
    return a < b ? a : b;
}

//计算税费，遍历每个阶梯，扣除阶梯内税费；
double f(double x) {
    double y = 0;
    y += min(x, 3000) * 0.03;
    if (x > 3000) y += (min(x, 12000) - 3000) * 0.1;
    if (x > 12000) y += (min(x, 25000) - 12000) * 0.2;
    if (x > 25000) y += (min(x, 35000) - 25000) * 0.25;
    if (x > 35000) y += (min(x, 55000) - 35000) * 0.3;
    if (x > 55000) y += (min(x, 80000) - 55000) * 0.35;
    if (x > 80000) y += (x - 80000) * 0.45;
    return x - y;
}

double binary_search(FUNC_T func, double y) {
    double l = 0, r = 2 * y, mid;
    while(r - l > 1e-6) {
        mid = (l + r) / 2.0;
        if (func(mid) < y) l = mid;
        else r = mid;
    }
    return mid;
}

int main() {
    double y;
    while (scanf("%lf", &y) != EOF) {
        double x = binary_search(f, y);
        printf("x = %.2lf, f(%.2lf) = %lf\n", x, x, f(x));
    }

    return 0;
}
