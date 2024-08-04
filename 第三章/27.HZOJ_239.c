/*************************************************************************
	> File Name: 27.HZOJ_239.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 04 Aug 2024 12:37:25 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//不规则街道问题；
int f(long long n, long long num);
//定义变量用于递归函数内操作；
long long x, y, X, Y;

int main() {
//按题目要求输入输出；
    long long t, n, s, d;
//定义变量取出递归函数内坐标值；
    long long sx, sy, dx, dy; 
    scanf("%lld", &t);
//循环输入输出；
    while(t--) {
        scanf("%lld%lld%lld", &n, &s, &d);
        f(n, s);
        sx = x; sy = y;//取出坐标值；
        //printf("%lld %lld\n", sx, sy);
        f(n, d);
        dx = x; dy = y;//取出坐标值；
        //printf("%lld %lld\n", dx, dy);
        //printf("%lld %lld\n",llabs(dx - sx), llabs(dy - sy));
        long long h = ((dx - sx) * (dx - sx)) + ((dy - sy) * (dy - sy));
        //printf("%lld %lf\n", h, sqrt(h));
        printf("%.0lf\n", 10LL * sqrt(h));
    }
    return 0;
}

int f(long long n, long long num) {
    long long quantity = 1LL << (2 * (n - 1));//第n级图形中每个部分的数量；
    long long L = 1LL << (n -1);//第n级图形的边长的一半；
//1级图形的坐标值；
    if(n == 1) {
        if (num == 1) {
            x = 0, y = 0;
        }else if (num == 2) {
            x = 1, y = 0;
        }else if (num == 3) {
            x = 1, y = 1;
        }else if (num == 4){
            x = 0, y = 1; 
        }return 0;
    }
//根据编号递归向下取得对应1级编号的坐标值，进行相应操变换作回溯到所求位置；
    if (num <= quantity) {
        f (n - 1, num);
        X = x, Y = y;
        x = Y, y = X;
    }else if (num <= 2 * quantity) {
        f (n - 1, num - quantity);
        X = x, Y = y;
        x = L + X, y = Y;
    }else if (num <= 3 * quantity) {
        f (n - 1, num - 2 * quantity);
        X = x, Y = y;
        x = L + X, y = L + Y;
    }else if (num <= 4 * quantity) {
        f (n - 1, num - 3 * quantity);
        X = x, Y = y;
        x = L - Y - 1; y = 2 * L - X - 1;
    }
    return 0;
}
