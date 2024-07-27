/*************************************************************************
	> File Name: 39.HZOJ_119.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 26 Jul 2024 08:19:39 PM CST
 ************************************************************************/

#include<stdio.h>


int days(int y, int m) {
     switch (m) {
        case  1:
        case  3:
        case  5:
        case  7:
        case  8:
        case 10:
        case 12:
    return 31;
        case  4:
        case  6:
        case  9:
        case 11:
    return 30;
        case  2:
    return 28 +(y % 4 == 0 && y % 100 || y % 400 == 0);
        }
    }

void output_pre_day(int y, int m, int d) {
    d -= 1;
    if (d == 0) m -= 1;
    if (m == 0) y -= 1;
    if (m == 0) m = 12;
    if (d == 0) d = days(y, m);
    printf("%d %d %d", y, m ,d);
    return ;
    }

void output_next_day(int y, int m, int d) {
    d += 1;
    if (d > days(y, m)) m += 1, d = 1;
    if (m > 12) y += 1, m = 1;
    printf("%d %d %d",y, m, d );
    }

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    output_pre_day(y, m, d);
    printf("\n");
    output_next_day(y, m, d);

    return 0;
}
