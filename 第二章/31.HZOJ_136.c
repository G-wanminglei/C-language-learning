/*************************************************************************
	> File Name: 31.HZOJ_136.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 24 Jul 2024 09:51:58 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) printf("%d\n", i);
        continue;
    }
    for (int i = 1; i <= n; i++) {
        if (i % 7) continue;
        printf("%d\n", i);
    }
    for (int i = 7; i <= n; i+=7) {
        if (i % 7 == 0) printf("%d\n", i);
    }
    return 0;
}
