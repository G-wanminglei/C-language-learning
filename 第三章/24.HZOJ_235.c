/*************************************************************************
	> File Name: 24.HZOJ_235.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 02 Aug 2024 09:04:18 PM CST
 ************************************************************************/

#include<stdio.h>

void index_enumerate(int i, int j, int n);
int arr[10];


int main() {
    int n;
    scanf("%d", &n);
    index_enumerate(0, 1, n);
    return 0;
}

void index_enumerate(int i, int j, int n) {
    if (j > n) return ;
    for (int k = j; k <= n; k++) {
        arr[i] = k;
        for (int m = 0; m <= i; m++) {
            if (m) printf(" ");
            printf("%d", arr[m]);
        }
            printf("\n");
        index_enumerate(i + 1, k + 1, n);
    }
}



