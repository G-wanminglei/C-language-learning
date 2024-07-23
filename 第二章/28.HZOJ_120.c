/*************************************************************************
	> File Name: 28.HZOJ_120.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Tue 23 Jul 2024 07:55:39 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int y, m, d, days;
    scanf("%d%d%d", &y, &m, &d);
    switch (m) {
        case  1:
        case  3:
        case  5:
        case  7:
        case  8:
        case 10:
        case 12:
            days = 31; break;
        case  4:
        case  6:
        case  9:
        case 11:
            days = 30; break;
        case  2:
            days = 28 + ((y % 4 == 0 && y % 100) || y % 400 == 0); break;
    }
    printf("%s\n", m > 0 && m <= 12 && d <= days ? "YES" : "NO");
    return 0;
}
