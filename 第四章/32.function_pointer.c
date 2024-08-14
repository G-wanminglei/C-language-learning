/*************************************************************************
	> File Name: 32.function_pointer.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 14 Aug 2024 10:52:11 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void test1() {
    printf("function test1\n");
}

void test2() {
    printf("function test2\n");
}

void test3() {
    printf("function test3\n");
}

void (*p)();

int main() {
    srand((unsigned)time(NULL));
    p = test1;
    p();
    p = test2;
    p();
    p = test3;
    p();
    //指针数组，每个指针指向一个函数地址；
    void (*arr[3])() = {test1, test2, test3};
    for (int i = 0; i < 10; i++) {
        arr[rand() % 3]();
    }
    return 0;
}
