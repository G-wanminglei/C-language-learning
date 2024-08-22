/*************************************************************************
	> File Name: 36.qsrt.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 16 Aug 2024 03:00:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//生成随机数组函数;
int *getRandData(int n) {
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

//打印函数；
void output(int *arr, int n) {
    int len = 0;
    for (int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("-");
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n");
    return ;
}

//从小到大排列，条件反过来是从大到小；
int comp1(const void *p1, const void *p2) {
    const int *a = (const int *)p1;
    const int *b = (const int *)p2;
    if (*a < *b) return -1;
    if (*a == *b) return 0;
    if (*a > *b) return 1;
}

//从小到大排列，条件反过来是从大到小；
int comp2(const void *p1, const void *p2) {
    return *(const int *)p1 - *(const int *)p2;
}

void swap1(void *x, void *y, size_t size) {
    char *a = (char *)x;
    char *b = (char *)y;
    char c;
    for (int i = 0; i < size; i++) {
        if (a[i] == b[i]) continue ;
        c = a[i];
        a[i] = b[i];
        b[i] = c;
    }
    return ;
}

void swap2(void *x, void *y, size_t size, void *buff) {
    memmove(buff, x, size);
    memmove(x, y, size);
    memmove(y, buff, size);
    return ;
}

void my_qsort(void *arr, size_t count, size_t size, int (*comp)(const void*,const void*)) {
    if (count <= 1) return ;
    void *x = arr;
    void *y = arr + (count - 1) * size;
    void *pivot = malloc(size), *buff = malloc(size);
    memcpy(pivot, arr, size);
    do {
        while (comp(x, pivot) < 0) x += size;
        while (comp(pivot, y) < 0) y -= size;
        if (x <= y) {
            swap2(x, y, size, buff);
            x += size, y -= size;
        }
    }while (x <= y);
    size_t cut1 = y < arr ? 0 : (y - arr) / size + 1;
    size_t cut2 = count - (x - arr) / size;
    my_qsort(arr, cut1, size, comp);
    my_qsort(x, cut2, size, comp);
    return ;
}

int main() {
    srand((unsigned)time(NULL));
    int *arr = getRandData(10);
    output(arr, 10);
    my_qsort(arr, 10, sizeof(int), comp1);
    output(arr, 10);
    my_qsort(arr, 10, sizeof(int), comp2);
    output(arr, 10);
    return 0;
}
