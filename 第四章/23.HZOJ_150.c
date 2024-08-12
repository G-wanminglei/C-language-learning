/*************************************************************************
	> File Name: 23.HZOJ_150.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 12 Aug 2024 09:35:12 PM CST
 ************************************************************************/

#include<stdio.h>

int n, m;
int arr[205][205];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%d", arr[j][i]);
            if (j) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
