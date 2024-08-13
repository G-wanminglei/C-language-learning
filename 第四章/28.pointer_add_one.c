/*************************************************************************
	> File Name: 28.pointer_add_one.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Tue 13 Aug 2024 10:14:32 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, *p1 = &a;
    double b, *p2 = &b;
    printf("&a = %p\n", &a);
    printf("p1 + 0 = %p\n", p1 + 0);
    printf("p1 + 1 = %p\n", p1 + 1);
    printf("p1 + 2 = %p\n", p1 + 2);
    printf("P1 + 3 = %p\n", p1 + 3);
    printf("&b = %p\n", &b);
    printf("p2 + 0 = %p\n", p2 + 0);
    printf("p2 + 1 = %p\n", p2 + 1);
    printf("p2 + 2 = %p\n", p2 + 2);
    printf("P2 + 3 = %p\n", p2 + 3);
    int arr[4] = {1, 2, 3, 4};
    int *p3 = arr;
    for (int i = 0; i < 4; i++) {
        printf("p3 + %d = %p\n", i, p3 + i);
        printf("arr[%d] = %p\n", i, &arr[i]);
    }
    int (*p4)[10] = 0x0;//数组指针，可以指向一个二层数组元素为10的二维数组；
    int arr2[30][10];
    p4 = arr2;
    printf("p4 + 0 = %p\n", p4 + 0);
    printf("p4 + 1 = %p\n", p4 + 1);
    printf("p4 + 2 = %p\n", p4 + 2);
    printf("p4 + 3 = %p\n", p4 + 3);
    int *p5[10];//指针数组；
    int *(*p6[10])[10];//指针数组，每个指针指向一个指针数组；
    //对于变量名来说同时紧挨着*和[],这个变量首先是个数组，数组元素为指针；
    //先判断变量名类型，数组指针类型是指针，指针数组类型是数组；
    return 0;
}
