/*************************************************************************
	> File Name: 10.HZOJ-113-3.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 17 Jul 2024 10:45:08 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int y, m, a;
    scanf("%d%d", &y, &m);
    a = (y % 4 == 0 && y % 100) || y % 400 == 0;
    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n"); break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n"); break;
        case 2: 
            printf("%d\n", 28 + a); break;
    }
    return 0;
}
