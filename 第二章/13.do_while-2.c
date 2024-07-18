/*************************************************************************
	> File Name: 13.do_while-2.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 18 Jul 2024 09:29:57 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, m = 0;
    scanf("%d", &n);
    printf("program 1:\n");
    if(n == 0) m = 1;
    while (n) {
        n /= 10;
        ++m;
    }
    printf("digits : %d\n", m);
    printf("program 2:\n");
    int i = 1;
    n = 1;
    while (i < m){
        n *= 10;
        i++;
    }
    m = 0;
    do {
        n /= 10;
        m++;
    } while (n);
    printf("digits : %d\n", m);
    return 0;
}
