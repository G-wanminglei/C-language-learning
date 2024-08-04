/*************************************************************************
	> File Name: 26.HZOJ_237.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 03 Aug 2024 03:02:09 PM CST
 ************************************************************************/

#include<stdio.h>

int arr[8], vis[9] = {0};

void print(int n) { 
    for (int i = 0; i < n; i++) {
    if (i) printf(" ");
    printf("%d", arr[i]);
    }
    printf("\n");
    return ;
}

void f(int i, int n){
    if (i == n) {
        print(i);
        return ;
    }
    for (int k = 1; k <= n; k++) {
        if (vis[k]) continue;
        arr[i] = k;
        vis[k] = 1;
        f(i + 1, n);
        vis[k] = 0;
    }
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    f(0, n);
    return 0;
}
