/*************************************************************************
	> File Name: 10.HZOJ-90.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 15 Jul 2024 08:24:09 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int bai, shi, ge;
    bai = a / 100;
    shi = a % 100 / 10;
    ge  = a % 10;
    printf("%d\n%d\n%d\n", bai, shi, ge);
    return 0;
}
