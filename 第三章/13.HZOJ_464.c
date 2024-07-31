/*************************************************************************
	> File Name: 13.HZOJ_464.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 31 Jul 2024 12:20:09 PM CST
 ************************************************************************/

#include<stdio.h>

int is_leap_year(int x) {
   return (x % 4 == 0 && x % 100) || (x % 400 == 0 ) ? 1 : 0;    
}

int main() {
    int x, y, ans = 0;
    scanf("%d %d", &x, &y);
    for (int i = x; i <= y; i++) {
        ans += is_leap_year(i);
    }
    printf("%d\n",ans);
    return 0;
}
