/*************************************************************************
	> File Name: 35.typedef.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 16 Aug 2024 11:13:56 AM CST
 ************************************************************************/

#include<stdio.h>

typedef long long LL;//把对应类型数据更改为类型名；
typedef int (*Arr2Dim10)[10];
typedef void(*Func)();

void test() {
    printf("hello function pointer\n");
    return ;
}

int main() {
    LL a;
    printf("sizeof(a) = %zu\n", sizeof(a));
    int arr[5][10];
    Arr2Dim10 p1 = arr;//p1就是一个数组指针；
    Func p2 = test;//p2是一个函数指针；
    p2();
    return 0;
}
