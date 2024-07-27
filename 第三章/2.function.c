/*************************************************************************
	> File Name: 2.function.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 27 Jul 2024 11:53:45 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int sum(int a, int b) {
    return a + b;
}

double select_function(int flag, double x) {
    switch (flag) {
        case 1: return sqrt(x);
        case 2: return x * x;
        default : printf("error flag\n"); break;
    }
    return 0;
}

void print_hello_world(int n) {
    for (int i = 0; i < n; i++) {
        printf("hello world\n");
    }
    return ;
}


int main() {
    print_hello_world(3);
    int a, b;
    scanf("%d%d", &a, &b );
    printf("a + b = %d\n", sum(a, b));
    int flag;
    double x;
    scanf("%d%lf", &flag, &x);
    printf("sprt(x) = %lf\n", select_function(flag, x));
    scanf("%d%lf", &flag, &x);
    printf("x * x = %lf\n", select_function(flag, x));
    return 0;
}
