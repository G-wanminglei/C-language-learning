/*************************************************************************
	> File Name: 3.if_else.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 17 Jul 2024 04:41:23 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a < b) printf("YES\n");
    else printf("NO\n");
     
    if (a < b) {
        int c = a * b;
        printf("c = %d\n", c);

    }
    return 0;
}
