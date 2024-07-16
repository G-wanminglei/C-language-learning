/*************************************************************************
	> File Name: 1.types.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 03 Jul 2024 07:21:50 PM CST
 ************************************************************************/

#include<stdio.h>
#include<inttypes.h>

int main() {
    printf("INT32_MAX=%d\n", INT32_MAX);
    printf("INT32_MIN=%d\n", INT32_MIN);

    int a =INT32_MAX + 1;
    printf("a = %d\n", a);

    long long e =2147483647LL + 1;
    printf("e = %lld\n", e);

    float f = e + 0.1;
    double ff = e + 0.123456789;
    printf("float : %.9f\n", f);
    printf("double : %.9ff\n", ff);

    char g = 'a';
    printf("g = %c\n", g);
    printf("g(%%d) = %d\n", g);
    printf("g + 5 = %c\n", g + 5);
    printf("48 = %c\n", 48);

    printf("sizeof(int) = %lu\n", sizeof(int));
    printf("sizeof(long long) = %lu\n", sizeof(long long));
    printf("sizeof(float) = %lu\n", sizeof(float));
    printf("sizeof(double) = %lu\n", sizeof(double));
    printf("sizeof(char) = %lu\n", sizeof(char));
    return 0;
}
