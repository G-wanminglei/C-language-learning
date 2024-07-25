/*************************************************************************
	> File Name: 3.HZOJ_138.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 25 Jul 2024 10:39:25 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < 2 * n; i++) {
        int a_num = abs (i - n);
        int b_num = 2 * n - 2 * abs (i - n);
        for(int j = 0; j < a_num; j++) printf(" ");
        for(int k = 0; k < b_num; k++) printf("A");
        printf("\n");
    }
    return 0;
}
