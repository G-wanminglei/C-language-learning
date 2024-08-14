/*************************************************************************
	> File Name: 31.demo.1.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 14 Aug 2024 10:40:07 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int *p = arr;
    for (int i = 0; i < 3; i++) {
        //p[1]等同于*(p + 1) = arr[1]； &p[1] 就是p + 1的地址；整体等同于*(p + 1 - 2 + i + 5) = *(p + i + 4)； 
        printf("%d\n", (i + 5)[&p[1] - 2]);
    }
    return 0 ;
}
