/*************************************************************************
	> File Name: 27.funtion_with_pointer.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Tue 13 Aug 2024 09:41:12 PM CST
 ************************************************************************/

#include<stdio.h>

void add_once(int *p) {
    *p += 1;
    return ;
}

void f(int n, int *sum_addr) {
    *sum_addr = (1 + n) * n / 2;
    return ;
}

void output(int *p, int n) {
    for (int i = 0; i < 10; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }
    return ;
}

int main() {
    int a = 123;
    printf("a = %d\n", a);
    add_once(&a);
    printf("a = %d\n", a);
    int n = 10, sum;
    f(n, &sum);
    printf("sum = %d\n", sum);
    int arr[10] = {9, 3, 8, 2, 7, 6, 1, 5, 4, 0};
    output(arr, 10);
    return 0;
}
