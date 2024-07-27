/*************************************************************************
	> File Name: 1.block.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 27 Jul 2024 11:42:59 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a = 1; int b = 2;
    for (int i = 0; i < 3; i++) {
        int a = 3; int b = 4;
        printf("line 14: a = %d, b = %d\n", a, b);
    }
    printf("line 16: a = %d, b = %d\n", a, b);
    return 0;
}
