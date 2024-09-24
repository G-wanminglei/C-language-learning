/*************************************************************************
	> File Name: 3.file_operator.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Tue 24 Sep 2024 09:57:02 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_N 10000

const char *file_name = "data2.txt";
int arr[MAX_N + 5], n = 0;
void output_arr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return ;
}

void output_to_file(int *arr, int n) {
    FILE *fp = fopen(file_name, "a");
    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d ", arr[i]);
    }
    fclose(fp);
}

void clear_file() {
    FILE *fp = fopen(file_name, "w");
    fclose(fp);
    return ;
}

int output_test() {
    srand((unsigned)time(NULL));
    for (n = 0; n < 10; n++) {
        arr[n] = rand() % 100;
    }
    output_arr(arr, n);
    output_to_file(arr, n);
    return 0;
}

int output_from_file(int *arr) {
    int i = 0;
    FILE *fp = fopen(file_name, "r");
    if (fp == NULL) return 0;
    while (fscanf(fp, "%d", arr + i) != EOF) {
        i += 1;
    }
    fclose(fp);
    return i;
}

int read_test() {
    n = output_from_file(arr);
    output_arr(arr, n);
    printf("total read %d numbers\n", n);
    return 0;
}

int main() {
    clear_file();
    return 0;
}
