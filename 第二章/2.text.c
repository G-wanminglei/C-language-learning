/*************************************************************************
	> File Name: 2.text.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 17 Jul 2024 08:13:49 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) printf("HEHE\n");
    else if (n > 0 && n < 60) printf("FAIL\n");
    else if (n >= 60 && n < 75) printf("MEDIUM\n");
    else if (n >= 75 && n <= 100) printf("GOOD\n");
    return 0;
}
