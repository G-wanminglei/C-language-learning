/*************************************************************************
	> File Name: 19.test6.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 21 Jul 2024 01:22:01 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n % 2 == 0 && ({goto if_stmt; 0;});
    !(n % 2) == 0 && ({goto else_stmt; 0;});
if_stmt:
    printf("%d is even\n", n);
    goto if_end;
else_stmt:
    printf("%d is odd\n", n);
if_end:
    return 0;
}
