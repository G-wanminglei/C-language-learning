/*************************************************************************
	> File Name: 15.args.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 07 Sep 2024 02:57:41 PM CST
 ************************************************************************/

#include<stdio.h>
#include"define_default.h"

void __test_func(int a, int b, double c) {
    printf("a = %d, b = %d, c = %lf\n", a, b, c);
    return ;
}

int main() {
    test_func(,,);
    test_func(1,,);
    test_func(,2,);
    test_func(,,3);
    test_func(1,2,3);
    return 0;
}
