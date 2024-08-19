/*************************************************************************
	> File Name: 39.quick_sort.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 17 Aug 2024 12:11:03 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int *getRandData(int n) {
    int *arr = (int *)calloc(n, sizeof(int));
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

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return ;
}

//int *arr是传入一个数组，l是左指针0，r是数组元素个数，r - 1是右指针；
void quick_sort(int *arr1, int l, int r) {
    if (r - l <= 2) {
        if (r - l <= 1) return ;
        if (arr1[l] > arr1[l + 1]) return swap(&arr1[l], &arr1[l + 1]);
    }
    int x = l, y = r - 1, pivot = arr1[l];
    while(x < y) {
        while(x < y && arr1[y] >= pivot) --y;//先自减再返回；
        if (x < y) arr1[x++] = arr1[y];
        while(x < y && arr1[x] < pivot) ++x;//先自加再返回；
        if (x < y) arr1[y--] = arr1[x];
    }
    arr1[x] = pivot;
    quick_sort(arr1, l, x);
    quick_sort(arr1, x + 1, r);
    return ;
}

//优化方案v1：先定位两个指针再交换；
void quick_sort_v1(int *arr2, int l, int r) {
    if (r - l <= 2) {
        if (r - l <= 1) return ;
        if (arr2[l] > arr2[l + 1]) swap(&arr2[l], &arr2[l + 1]);
            return ;
    }
    int x = l, y = r - 1, pivot = arr2[l];
    do {
        while (arr2[x] < pivot) ++x;
        while (arr2[y] > pivot) --y;
        if (x <= y) {
            swap(&arr2[x], &arr2[y]);
            x++,y--;
        }
    }while(x <= y);
    quick_sort_v1(arr2, l, y + 1);
    quick_sort_v1(arr2, x, r);
    return ;
}
int main() {
    srand((unsigned)time(NULL));
    int n;
    while(scanf("%d", &n) != EOF) {
        int *arr1 = getRandData(n);
        int *arr2 = getRandData(n);
        output(arr1, n);
        printf("\n");
        quick_sort(arr1, 0, n);
        output(arr1, n);
        printf("\n");
        output(arr2, n);
        printf("\n");
        quick_sort_v1(arr2, 0, n);
        output(arr2, n);
        free(arr1);
        free(arr2);
    }
    return 0;
}
