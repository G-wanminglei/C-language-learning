/*************************************************************************
	> File Name: 17.HZOJ_466.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 31 Jul 2024 05:00:22 PM CST
 ************************************************************************/

#include<stdio.h>

int is_palindromes(int x, int y, int z);

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        ans += is_palindromes(i, 0, i);
    }
    printf("%d\n", ans);
    return 0;
}

//给函数传参等同于给形参赋值，可以在传参过程操作实参
int is_palindromes(int x, int y, int z) {
    if (x  == 0) return (y == z);
    return is_palindromes(x / 10, y * 10 + x % 10, z);
}
