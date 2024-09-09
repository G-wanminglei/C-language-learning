/*************************************************************************
	> File Name: 20.enum.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 09 Sep 2024 08:37:10 PM CST
 ************************************************************************/

#include<stdio.h>
#define P(x, format) printf("%s = "format"\n", #x, x)

enum Number {
    zero,
    one,
    two = 10,
    three,
    four
};

//枚举类型参数作用域为枚举类型定义范围内，和外部变量同名时不会影响外部参数；
enum FUNC_TEST {
#ifdef TEST1
    FUNC_test1,
#endif
#ifdef TEST2
    FUNC_test2,
#endif
#ifdef TEST3
    FUNC_test3,
#endif
#ifdef TEST4
    FUNC_test4,
#endif
    FUNC_MAX
};

#define DEFINE_FUNC(name) \
void name() { \
    printf("this is function : %s\n", #name); \
}

DEFINE_FUNC(test1)
DEFINE_FUNC(test2)
DEFINE_FUNC(test3)
DEFINE_FUNC(test4)

void (*func_arr[FUNC_MAX])() = {
#ifdef TEST1
    test1,
#endif
#ifdef TEST2
    test2,
#endif
#ifdef TEST3
    test3,
#endif
#ifdef TEST4
    test4
#endif
}; 

int main() {
    for(int i = 0; i < FUNC_MAX; i++) {
        func_arr[i]();
    }
    enum Number a;
    a = zero;
    P(a, "%d");
    a = one;
    P(a, "%d");
    a = two;
    P(a, "%d");
    a = three;
    P(a, "%d");
    a = four;
    P(a, "%d");
    return 0;
}
