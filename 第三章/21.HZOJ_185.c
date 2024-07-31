/*************************************************************************
	> File Name: 21.HZOJ_185.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 31 Jul 2024 09:25:25 PM CST
 ************************************************************************/

#include<stdio.h>

int f(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
}

int f(int n) {
    if (n <= 2) return 1;
    return f(n - 1) + f(n - 2);
}
