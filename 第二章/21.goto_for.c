/*************************************************************************
	> File Name: 21.goto_for.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 22 Jul 2024 10:28:22 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i = 0;
    goto for_1;
for_1:
    if (i < n) goto for_2;
    else goto for_3;
for_2:
    if (++i % 3) {
        printf("%d ", i);
        goto for_1;}
    else goto for_1;
for_3:
    printf("\n");
    return 0;
}
