/*************************************************************************
	> File Name: 13.HZOJ95-2.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 15 Jul 2024 10:16:51 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int shi, ge;
    shi = a / 10;
    ge  = a % 10;
    int b;
    b = ge * 10 + shi;
    printf("%d\n", b);
    return 0;
}
