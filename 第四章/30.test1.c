/*************************************************************************
	> File Name: 30.test1.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 14 Aug 2024 10:02:19 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d.%d.%d.%d",&a, &b, &c, &d);
    unsigned int n;
    char *p = (char *)&n;
    p[0] = d;
    p[1] = c;
    p[2] = b;
    p[3] = a;
    printf("n = %u\n", n);
    return 0;
}
