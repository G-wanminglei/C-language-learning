/*************************************************************************
	> File Name: 10.row_col_array.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 10 Aug 2024 11:21:10 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a[10][10];
    printf("a[0][0] = %p\n", &a[0][0]);
    printf("a[0][1] = %p\n", &a[0][1]);
    printf("a[1][0] = %p\n", &a[1][0]);
    return 0;
}
