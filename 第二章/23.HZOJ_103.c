/*************************************************************************
	> File Name: 23.HZOJ_103.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Tue 23 Jul 2024 02:59:45 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a % b == 0) printf("YES\n");
    else printf("NO\n");

    if (a % b) printf("NO\n");
    else printf("YES\n");

    switch (a % b) {
        case 0: printf("YES\n"); break;
        default : printf("NO\n"); break;
    }
    printf("%s\n", a % b ? "NO" : "YES");
    printf("%s\n", a % b == 0 ? "YES" : "NO");
    return 0;
}
