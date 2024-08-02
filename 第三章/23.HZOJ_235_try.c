/*************************************************************************
	> File Name: 23.HZOJ_235.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 31 Jul 2024 10:08:33 PM CST
 ************************************************************************/

#include<stdio.h>

void index_enumerate(int n, int m) {
    if (m == n) return ;
    for (int i = 1; i <= (n - m); i++) {
        for (int j = 0; j < i; j++) {
            printf("%d", j + m + 1);
            if (j + 1 < i)printf(" ");
        }
        printf("\n");
    }
    index_enumerate(n, m + 1);
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    index_enumerate(n, 0);
    return 0;
}
