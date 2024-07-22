/*************************************************************************
	> File Name: 18.goto.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 21 Jul 2024 01:12:12 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    goto lab_1;
    printf("Hello World\n");
lab_1:
    printf("Hello Shenyang\n");

    goto lab_2;
    int a = 1, b = 1;
    scanf("%d%d", &a, &b);
lab_2:
    printf("%d\n", a + b);

    return 0;
}
