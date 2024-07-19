/*************************************************************************
	> File Name: 15.for.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 19 Jul 2024 10:41:06 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", i + 1);
    }
    printf("\n");
    for (int i = 0; ;i++) {
        if (i == n) break;
        printf("%d ",i + 1);
    }
    printf("\n");
    return 0;
}
