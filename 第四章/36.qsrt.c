/*************************************************************************
	> File Name: 36.qsrt.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 16 Aug 2024 03:00:00 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *getRandData(int n) {
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

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


int main() {
    srand((unsigned)time(NULL));
    int *arr = getRandData(10);
    output(arr, 10);
    qsort(arr, 10, sizeof(int), comp1);
    output(arr, 10);
    qsort(arr, 10, sizeof(int), comp2);
    output(arr, 10);
    return 0;
}
