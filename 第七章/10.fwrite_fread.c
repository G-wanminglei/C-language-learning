/*************************************************************************
	> File Name: 10.fwrite_fread.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 29 Sep 2024 10:27:02 PM CST
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h>   // time

#define MAX_N 10
int arr[MAX_N];

void output(int *arr, int n) {
    printf("arr : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return ;
}


void fwirte_text() {
    FILE *fp = fopen("data7.dat", "wb");
    fwrite(arr, sizeof(int), MAX_N, fp);
    fclose(fp);
    return ;
}

void fread_text() {
    FILE *fp = fopen("data7.dat", "rb");
    fread(arr, sizeof(int), MAX_N, fp);
    output(arr, MAX_N);
    return ;
}

int main() {
    srand(time(0));
    for (int i = 0; i < MAX_N; i++) {
        arr[i] = rand() % 10000;
    }
    output(arr, MAX_N);
    fwirte_text();
    for (int i = 0; i < MAX_N; i++) {
        arr[i] = rand() % 10000;
    }
    output(arr, MAX_N);
    fread_text();
    return 0;
}
