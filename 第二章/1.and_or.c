/*************************************************************************
	> File Name: 1.and_or.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 17 Jul 2024 02:53:07 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    a < b && printf("YES\n");
    !(a < b) && printf("NO\n");
    return 0;
}
