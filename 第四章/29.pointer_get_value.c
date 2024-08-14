/*************************************************************************
	> File Name: 29.pointer_get_value.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 14 Aug 2024 09:21:47 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n = 0x61626364;//小端系统，数据的低位存储在内存的低位；
    char *p = (char *)&n;
    printf("*p + 0 = %c\n", *(p + 0));
    printf("*p + 1 = %c\n", *(p + 1));
    printf("*p + 2 = %c\n", *(p + 2));
    printf("*p + 3 = %c\n", *(p + 3));
    //a[b] 等同于*[a + b];
    printf("p[0] = %c\n", p[0]);
    printf("p[1] = %c\n", p[1]);
    printf("p[2] = %c\n", p[2]);
    printf("p[3] = %c\n", p[3]);
    return 0;
}
