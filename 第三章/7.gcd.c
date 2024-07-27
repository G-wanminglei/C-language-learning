/*************************************************************************
	> File Name: 7.gcd.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 28 Jul 2024 12:28:23 AM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    if (a % b == 0) return b;                         //可以写成if（b == 0）return a；就是再调用一次下层函数直到余数b为0    
    return gcd(b, a % b);//b的值不断缩小，如果余数为3，下一层函数余数只能为2||1||0，余数为2下一层余数一定为1||0，为1下一层一定为0，所以一定会达到边界条件余数为0
}

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF) {            //和对scanf返回值按位取反效果一样，读到EOF条件不成立跳出循环
        printf("gcd(%d %d) = %d\n", a, b, gcd(a, b));
    }
    return 0;
}
