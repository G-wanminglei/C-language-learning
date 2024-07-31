/*************************************************************************
	> File Name: 22.HZOJ_183.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 31 Jul 2024 09:36:58 PM CST
 ************************************************************************/

#include<stdio.h>

int f(int x);

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", f(x));
    return 0;
}

int f(int x) {
    if (x <= 0) return 0;
    if (x == 1) return 1;
    if (x % 2 == 0) return 3 * f(x / 2) - 1;
    if (x % 2 == 1) return 3 * f((x + 1) / 2) - 1;
}
