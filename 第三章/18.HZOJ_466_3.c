/*************************************************************************
	> File Name: 17.HZOJ_466.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 31 Jul 2024 05:00:22 PM CST
 ************************************************************************/

#include<stdio.h>

int is_palindromes(int x);
int y, z;

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        z = i;
        y = 0;
        ans += is_palindromes(i);
    }
    printf("%d\n", ans);
    return 0;
}

//给函数传参等同于给形参赋值，可以在传参过程操作实参
//当在递归函数函数体中操作变量注意传过来的实参是否循环以及在每次递归过程中参数是否更新符合预期
int is_palindromes(int x) {
    if (x == 0) return (y == z);
    //if (x == z) y = 0; 
    y = y * 10 + x % 10;
    return is_palindromes(x / 10);
}
