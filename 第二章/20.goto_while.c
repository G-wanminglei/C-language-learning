/*************************************************************************
	> File Name: 20.goto_while.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 22 Jul 2024 10:17:00 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, i = 0;
    scanf("%d", &n);
judge:
    if (i < n) goto stmt;
    else goto while_end;
stmt:
    printf("%d ", ++i);
    goto judge;
while_end:
    printf("\n");
    return 0;
}
