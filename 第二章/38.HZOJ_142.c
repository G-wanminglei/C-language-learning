/*************************************************************************
	> File Name: 36.HZOJ_142.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 26 Jul 2024 03:08:28 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        int flag = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j) continue;
            else flag = 0; break;
        }
        if (flag == 0) continue;
        int x = i, y = 0;
        while (x) {
            y = y * 10 + x % 10;
            x /= 10;
        }
        if (i != y) continue;
        if (c) printf(" ");
        c += printf("%d", i);
    }
    return 0;
}
