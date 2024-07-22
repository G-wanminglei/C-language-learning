/*************************************************************************
	> File Name: 22.one_stmt.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 22 Jul 2024 11:20:00 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++){
            printf("(%d, %d ) ", i, j);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", j + i * n);  
        }
        printf("\n");
    }
    return 0;
}
