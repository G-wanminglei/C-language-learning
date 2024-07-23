/*************************************************************************
	> File Name: 24.HZOJ_107.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Tue 23 Jul 2024 03:20:44 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", n % 7 == 0 && n % 2 ? "YES" : "NO");
    
    if (!(n % 7 == 0 && n % 2)) printf("NO\n");
    else printf("YES\n");
    return 0;
}
