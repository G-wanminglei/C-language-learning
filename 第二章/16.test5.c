/*************************************************************************
	> File Name: 16.test5.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 20 Jul 2024 09:50:00 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int f1 = 1, f2 = 1;
    for (int i = 0; i < 20; i++, f2 = f1 + f2, f1 = f2 - f1) {
        printf("%d ", f1);
    }
    printf("\n");
    for (int i = 0, f1 = 1, f2 = 1; i < 20; i++) {
        printf("%d ", f1);
        f2 = f1 + f2;
        f1 = f2 - f1;
    }
    printf("\n");
    for (int i = 0, a = 1, b = 1, c;i < 20; i++, b = c - a, a = b, b = c) {
        c = a + b;
        b = a;
        printf("%d ", b);
    }
    printf("\n");
    for (int i = 0, f1 = 1, f2 = 1;i < 10; i++, f1 = f1 + f2, f2 = f1 + f2) {
        printf("%d %d ", f1, f2);
    }
    printf("\n");
    return 0;
}
