/*************************************************************************
	> File Name: 8.mult_array.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 08 Aug 2024 09:14:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int a[3][4];
    int cut = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            a[i][j] = cut++;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 12; i++) {
        printf("-");
    }
    printf("\n");
    cut = 1;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            a[i][j] = cut++;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}
