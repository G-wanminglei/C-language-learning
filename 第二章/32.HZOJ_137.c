/*************************************************************************
	> File Name: 32.HZOJ_137.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 24 Jul 2024 10:24:36 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - i); j++) {
            printf("%c", ch);
            ch += 1;
        }
        printf("\n");
    }

    ch = 'A';
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
            ch += 1;
        }
        printf("\n");
    }
    return 0;
}
