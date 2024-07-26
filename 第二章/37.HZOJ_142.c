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
        int dep = 0;
        for (int j = 2; j * j <= i; j++) {
            if (i % j) continue;
            else flag = 0; break;
        }
        for (int j = 0, tra = i; j < 5 && flag == 1; j++) {
            dep = tra % 10 + dep * 10;
            tra /= 10;
        }
        if (i != dep) continue;
        if (c) printf(" ");
        c += printf("%d", i);
    }
    return 0;
}
