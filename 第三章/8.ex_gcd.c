/*************************************************************************
	> File Name: 8.ex_gcd.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 28 Jul 2024 01:10:08 PM CST
 ************************************************************************/

#include<stdio.h>

int x, y, nx, ny, c;
int ex_gcd(int a, int b) {
    if (b == 0) {
        x = 1 , y = 0;
        return a;              //边界条件要有返回值，函数才能回溯
    }                          //先确定输入和相应的返回值（输出），再确定边界条件及可以确定的返回值，最后调用递归函数并进行具体操作
    c = ex_gcd(b, a % b);
    nx = y;
    ny = x - a / b * y;
    x = nx;
    y = ny;
    return c;
}

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
    ex_gcd(a, b);
    printf("%d * %d + %d * %d = %d\n", a, x, b, y, c);
    }
    return 0;
}
