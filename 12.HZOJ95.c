/*************************************************************************
	> File Name: 12.HZOJ95.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 15 Jul 2024 10:10:22 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int shi, ge;
    shi = a / 10;
    ge  = a % 10;
    printf("%d%d\n", ge, shi);
    return 0;
}
