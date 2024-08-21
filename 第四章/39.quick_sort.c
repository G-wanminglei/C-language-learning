/*************************************************************************
	> File Name: 39.quick_sort.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 17 Aug 2024 12:11:03 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//生成随机值函数；
int *getRandData(int n) {
    //开辟一段内存空间；
    int *arr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

//打印数组函数；
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

//交换值函数；
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return ;
}

//int *arr是传入一个数组，l是左指针0，r是数组元素个数，r - 1是右指针；
void quick_sort(int *arr, int l, int r) {
    if (r - l <= 2) {
        if (r - l <= 1) return ;
        if (arr[l] > arr[l + 1]) return swap(&arr[l], &arr[l + 1]);
    }
    int x = l, y = r - 1, pivot = arr[l];
    while(x < y) {
        while(x < y && arr[y] >= pivot) --y;//先自减再返回；
        if (x < y) arr[x++] = arr[y];
        while(x < y && arr[x] < pivot) ++x;//先自加再返回；
        if (x < y) arr[y--] = arr[x];
    }
    arr[x] = pivot;
    quick_sort(arr, l, x);
    quick_sort(arr, x + 1, r);
    return ;
}

//优化方案v1：先定位两个指针再交换；
void quick_sort_v1(int *arr, int l, int r) {
    if (r - l <= 2) {
        if (r - l <= 1) return ;
        if (arr[l] > arr[l + 1]) swap(&arr[l], &arr[l + 1]);
            return ;
    }
    int x = l, y = r - 1, pivot = arr[l];
    do {
        while (arr[x] < pivot) ++x;
        while (arr[y] > pivot) --y;
        if (x <= y) {
            swap(&arr[x], &arr[y]);
            x++,y--;
        }
    }while(x <= y);
    quick_sort_v1(arr, l, y + 1);
    quick_sort_v1(arr, x, r);
    return ;
}

//取中间值函数；
int three_point_select(int a, int b, int c) {
    if (a < b) swap(&a, &b);
    if (a < c) swap(&a, &c);
    if (b < c) swap(&b, &c);
    return b;
}

//优化方案v2：基准值取中；
void quick_sort_v2(int *arr, int l, int r) {
    if (r - l <= 2) {
        if (r - l <= 1) return ;
        if (arr[l] > arr[l + 1]) swap(&arr[l], &arr[l + 1]);
            return ;
    }
    int x = l, y = r - 1;
    int pivot = three_point_select(
        arr[l],
        arr[r - 1],
        arr[(l + r) / 2]
        );
    do {
        while (arr[x] < pivot) ++x;
        while (arr[y] > pivot) --y;
        if (x <= y) {
            swap(&arr[x], &arr[y]);
            x++,y--;
        }
    }while(x <= y);
    quick_sort_v2(arr, l, y + 1);
    quick_sort_v2(arr, x, r);
    return ;
}

//优化方案v3:单边递归，减少递归深度；
void quick_sort_v3(int *arr, int l, int r) {
    if (r - l <= 2) {
        if (r - l <= 1) return ;
        if (arr[l] > arr[l + 1]) swap(&arr[l], &arr[l + 1]);
            return ;
    }
    while (l < r - 1) {
        int x = l, y = r - 1;
        int pivot = three_point_select(
            arr[l],
            arr[r - 1],
            arr[(l + r) / 2]
            );
        do {
            while (arr[x] < pivot) ++x;
            while (arr[y] > pivot) --y;
            if (x <= y) {
                swap(&arr[x], &arr[y]);
                x++,y--;
            }
        }while(x <= y);
        //左半区递归，右半区循环；
        quick_sort_v2(arr, l, y + 1);
        l = x;
    }
    return ;
}

//无监督快速排序；
void unguarded_insert_sort(int *arr, int l, int r) {
    int ind = l;
    //找到数组最小元素的下标；
    for (int i = l + 1; i < r; i++) {
        if (arr[i] < arr[ind]) ind = i;
    }
    //把最小元素放在数组首位，并且不改变其他元素顺序；
    while(ind > l) {
        swap(&arr[ind], &arr[ind - 1]);
        ind -= 1;
    }
    //数组首位为最小元素，从第二位遍历与前一位元素比较交换，使数组有序；
    //每次while循环结束时，j之前的都是有序的；
    for (int i = l + 1; i < r; i++) {
        int j = i;
        while (arr[j] < arr[j - 1]) {
            swap(&arr[j], &arr[j - 1]);
            j -= 1;
        }
    }
    return ;
}

#define threshold 16

//优化方案v4:快速排序嵌套插入排序，16个元素以内插入排序更快；
void quick_sort_v4(int *arr, int l, int r) {
    //左半区递归边界条件，调用插入排序；
    if (r - l <= threshold) {
        unguarded_insert_sort(arr, l, r);
        return ;
    }
    while (1) {
        int x = l, y = r - 1;
        int pivot = three_point_select(
            arr[l],
            arr[r - 1],
            arr[(l + r) / 2]
            );
        do {
            while (arr[x] < pivot) ++x;
            while (arr[y] > pivot) --y;
            if (x <= y) {
                swap(&arr[x], &arr[y]);
                x++,y--;
            }
        }while(x <= y);
        quick_sort_v2(arr, l, y + 1);
        //右半区循环判定，调用插入排序；
        if (r - x <= threshold) {
            unguarded_insert_sort(arr, l, r);
            return ;
        }else l = x;
    }
    return ;
}

int main() {
    srand((unsigned)time(NULL));
    int n;
    while(scanf("%d", &n) != EOF) {
        int *arr1 = getRandData(n);
        int *arr2 = getRandData(n);
        int *arr3 = getRandData(n);
        int *arr4 = getRandData(n);
        int *arr5 = getRandData(n);
        output(arr1, n);
        printf("\n");
        quick_sort(arr1, 0, n);
        output(arr1, n);
        printf("\n");
        output(arr2, n);
        printf("\n");
        quick_sort_v1(arr2, 0, n);
        output(arr2, n);
        printf("\n");
        output(arr3, n);
        printf("\n");
        quick_sort_v2(arr3, 0, n);
        output(arr3, n);
        printf("\n");
        output(arr4, n);
        printf("\n");
        quick_sort_v3(arr4, 0, n);
        output(arr4, n);
        printf("\n");
        output(arr5, n);
        printf("\n");
        quick_sort_v4(arr5, 0, n);
        output(arr5, n);
        free(arr1);
        free(arr2);
        free(arr3);
        free(arr4);
        free(arr5);
    }
    return 0;
}
