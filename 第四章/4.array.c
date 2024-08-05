/*************************************************************************
	> File Name: 4.array.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 05 Aug 2024 09:17:37 PM CST
 ************************************************************************/

#include<stdio.h>

void test1();
void test2();
void test3();
void test4();
void test5();

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}

void test1() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        a[i] = 2 * i;
    }
    for (int i = 0; i < 10; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return ;
}

void test2() {
    int n;
    printf("input n:");
    scanf("%d", &n);
    int b[2 * n];
    for (int i = 0; i < 2 * n; i++) {
        b[i] = 3 * i;
    }
    for (int i = 0; i < 2 * n; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }
    return ;
}

void test3() {
    int c[5] = {0};
    for (int i = 0; i < 5; i++) {
        printf("c[%d] = %d\n", i, c[i]);
    }
    return ;
}

void test4() {
    int d[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("d[%d] = %d\n", i, d[i]);
    }
    return ;
}

void test5() {
    int e[] = {1, 2, 3, 4, 5, 6, 7};
    size_t size = sizeof(e) / sizeof(int);//size_t是无符号整型类型，大小取决于目标平台，被设计的足够大；
    printf("sizeof(e) / sizeof(int) = %zu\n", size);//%zu是size_t的格式占位符，%lu是无符号整型（unsigned）的格式占位符；
    printf("e = %p\n", e);
    printf("&e[0] = %p\n", &e[0]);
    for (int i = 0; i < size; i++) {
        printf("&e[%d] = %p\n", i, &e[i]);
    }
    return ;
}
