/*************************************************************************
	> File Name: 3.sum.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 27 Jul 2024 05:55:59 PM CST
 ************************************************************************/

#include<stdio.h>


int sum(int a, int b, int c) {
    int n = (b - a) / c + 1;
    return (2 * a + (n - 1) * c) * n / 2;
    return 0;
}


int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", sum(a, b, c));
    return 0;
}
