/*************************************************************************
	> File Name: 5.test3.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 10 Jul 2024 09:02:49 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[90], t[100];
    scanf("%[^\n]", s);
    int n = 0;
    n = sprintf(t, "| %s |", s);
    for (int i = 0; i < n; i++) printf("-");
    printf("\n");
    printf("| %s |\n", s);
    for (int i = 0; i < n; i++) printf("-");
    printf("\n");

    return 0;
}
