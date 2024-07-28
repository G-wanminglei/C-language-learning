/*************************************************************************
	> File Name: 9.test_1.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 28 Jul 2024 11:04:41 PM CST
 ************************************************************************/

#include<stdio.h>

int n = 0;
int main() {
    if (n == 100) return 0;
    printf("%d ",++n);
    main();
    //根据需求决定先进行操作还是先调用递归函数
    //如果需要边界条件返回值就先调用，如果需要递归过程就先操作再调用
    return 0;
}
