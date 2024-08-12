/*************************************************************************
	> File Name: 25.HZOJ_881.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 12 Aug 2024 10:50:34 PM CST
 ************************************************************************/

#include<stdio.h>

void swap(int* a, int* b);

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}

void swap(int* a, int* b) {
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
    return  ;
}
