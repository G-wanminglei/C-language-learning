/*************************************************************************
	> File Name: 4.param.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 27 Jul 2024 08:26:57 PM CST
 ************************************************************************/

#include<stdio.h>

void test(int a, int b) {
    a += 1;
    b *= 2;
    printf("test : a = %d, b = %d\n", a, b);
    return ;
}

int main() {
    int a = 1, b = 2;
    test(a, b);
    printf("main : a = %d, b + %d\n", a, b);
    test(b, a);
    printf("main : a = %d, b + %d\n", a, b);
    return 0;
}
