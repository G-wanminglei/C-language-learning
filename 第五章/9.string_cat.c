/*************************************************************************
	> File Name: 9.string_cat.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 04 Sep 2024 10:31:53 PM CST
 ************************************************************************/

#include<stdio.h>

#define STR(n) #n
#define RUN(func) { \
    func; \
    printf("%s done\n", #func); \
}
#define CAT(a, b) a##b
void test1() {
    printf("this is tese1\n");
}

void test2(int a, int b) {
    printf("this is tese2 : %d, %d\n", a, b);
}

int main() {
    printf("%s\n", STR(hello));
    RUN(test1());
    RUN(test2(2, 3));
    int n10 = 123, n11 = 456;
    CAT(n, 10) = 789;
    printf("n10 = %d, n11 = %d\n", n10, n11);
    return 0;
}
