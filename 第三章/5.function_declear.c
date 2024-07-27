/*************************************************************************
	> File Name: 5.function_declear.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 27 Jul 2024 08:38:08 PM CST
 ************************************************************************/

#include<stdio.h>

void a_func(int x);
void b_func(int x);

void a_func(int x) {
    switch (x) {
        case 1: return b_func(x);
        case 2: printf("2 * x = %d\n", 2 * x); break;
    }
    return ;
}

void b_func(int x) {
    switch (x) {
        case 1: printf("3 * x = %d\n", 3 * x); break;
        case 2: return a_func(x);
    }
    return ;
}

int main() {
    a_func(1);
    b_func(2);

    return 0;
}
