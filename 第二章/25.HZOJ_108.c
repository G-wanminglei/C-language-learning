/*************************************************************************
	> File Name: 25.HZOJ_108.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Tue 23 Jul 2024 03:41:46 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
   // char c;
   // double m, n;
   // scanf("%c", &c);
   // scanf("%lf%lf",&m ,&n);
   // printf("%.2lf\n", c == 'r' ? m * n : m * n / 2.0);
    
    char s[10];
    double m, n;
    scanf("%s", s);
    scanf("%lf%lf",&m ,&n);
    printf("%.2lf\n", s[0] == 'r' ? m * n : m * n / 2.0);
    return 0;
}
