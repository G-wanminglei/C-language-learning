/*************************************************************************
	> File Name: 26.offset.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 16 Sep 2024 04:39:41 PM CST
 ************************************************************************/

#include<stdio.h>
#ifdef OFFSET1

#define offset(T, d) ({ \
    T t; \
    (void *)(&t.d) - (void *)(&t); \
})

#else

#define start(addr, T, d) (T *)((void *)addr - offset(T, d))
#define offset(T, d) (size_t)(&(((T *)(0))->d))

#endif

struct A {
    int a;
    char b;
    double c;
};

int main() {
    //两个指针差值返回值为ptrdiff_t类型数据，以元素为单位，占位符为%td（有符号整型）；
    //size_t表示对象的大小或者数组的长度，占位符为%zu（无符号整型）；
    printf("offset(A, a) = %lu\n", offset(struct A, a));
    printf("offset(A, b) = %td\n", offset(struct A, b));
    printf("offset(A, c) = %zu\n", offset(struct A, c));
    struct A a;
    printf("&a = %p\n", &a);
    printf("start(&a.a, struct A, a) = %p\n", start(&a.a, struct A, a));
    printf("start(&a.b, struct A, b) = %p\n", start(&a.b, struct A, b));
    printf("start(&a.c, struct A, c) = %p\n", start(&a.c, struct A, c));
    return 0;
}
