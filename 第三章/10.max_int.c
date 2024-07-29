/*************************************************************************
	> File Name: 10.max_int.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 29 Jul 2024 09:58:55 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>

int max_int(int n, ...) {
    va_list args;
    //声明一个va_list类型变量
    va_start(args, n);
    //初始化va_list变量指向固定参数n后第一个可变参数
    int ans = INT32_MIN;
    for(int i = 0; i < n; i++) {
        int a = va_arg(args, int);
        //va_arg出现一次就会在变参列表按位更新一次
        if (ans < a) ans = a;
    }
    va_end(args);
    //结束结束并清理变参列表的处理
    printf("max_int = %d\n", ans);
    return 0;
}

int main() {
    max_int(3, 8, 7, 9);
    max_int(2, 8, 7, 9);
    return 0;
}
