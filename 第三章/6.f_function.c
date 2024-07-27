/*************************************************************************
	> File Name: 6.f_function.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 27 Jul 2024 11:26:39 PM CST
 ************************************************************************/

#include<stdio.h>

int f(int n) {
    printf("in f(%d)\n", n);            //显示递归函数（递）流程
    if (n == 1) { 
        printf("out f(%d) = 1\n", n);   //显示归流程(边界条件，最小单位有确定的返回值) 
        return 1;}
    int ret = n * f(n - 1);
    printf("out f(%d) = %d\n", n, ret); //显示每次进入递归函数的返回值（归流程）

    return ret;
}

int main() {
    int n;
    while (~scanf("%d", &n)) {          //对scanf的返回值求反，当输入EOF是scanf的返回值为-1，按位取反为0，循环结束
    printf("f(%d) = %d\n", n, f(n));
    }
    return 0;
}
