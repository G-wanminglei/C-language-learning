/*************************************************************************
	> File Name: 16.HZOJ_466.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 31 Jul 2024 02:19:13 PM CST
 ************************************************************************/

#include<stdio.h>

int palindromes(int i);

int is_palindromes(int i);

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        ans += is_palindromes(i);
    }
    printf("%d\n", ans);
    return 0;
}

int is_palindromes(int x) {
    int y = x, z = 0;
    while (x) {
    z = z * 10 + x % 10;
    x /= 10;
    }
    return (y == z);
}
