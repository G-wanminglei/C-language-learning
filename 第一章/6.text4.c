/*************************************************************************
	> File Name: 6.text4.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 10 Jul 2024 10:13:18 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf^%lf=%lf\n", x, 1.0 / 3.0, pow(x, 1.0 / 3.0));
    return 0;

}
