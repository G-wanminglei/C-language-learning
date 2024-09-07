/*************************************************************************
	> File Name: 14.time.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 07 Sep 2024 02:06:55 PM CST
 ************************************************************************/

#include<stdio.h>
#include<time.h>
#include"define_run_time.h"

void test(int n) {
    long long sum = 0;
    for(int i = 1; i <= n; i++) sum += i;
    printf("sum = %lld\n", sum);
    return ;
}

int main() {
    TIME(test(100000));
    TIME(test(1000000));
    TIME(test(10000000));
    return 0;
}
