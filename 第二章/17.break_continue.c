/*************************************************************************
	> File Name: 17.break_continue.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 20 Jul 2024 11:58:02 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    int i = 0;
    scanf("%d",&n);
    while (i < n) {
        printf("%d ", i + 1);
        if (i + 1 == 8) break;
        i++;
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%d ",i + 1);
        if (i + 1 == 8) break;
    }
    printf("\n");
    i = 0;
    while (i < n) {
        i++;
        if (i > 8) continue;
        printf("%d ", i);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        if (i >= 8) continue;
        printf("%d ",i + 1);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        if ((i + 1) % 3 == 0 ) continue;
        printf("%d ",i + 1);
    }
    printf("\n");
    return 0;
}
