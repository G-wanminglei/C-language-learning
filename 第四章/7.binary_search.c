/*************************************************************************
	> File Name: 7.binary_search.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 07 Aug 2024 08:35:49 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int arr[100] = {0};
int n, m, len;
void search(int m);

int main() {
    scanf("%d", &n);
    //设置rand函数随机种子time（NULL），需要一个unsigned的值；
    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++) {
        if (i == 0) arr[i] = rand() % 10;
        else arr[i] = arr[i - 1] + rand() % 10 + 1;
        len += printf("%4d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%c", '-');//或者printf("-");
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");
    while (scanf("%d", &m) != EOF) {
        int flag1 = 0, cut1 = 0;
        for (int i = 0; i < n; i++) {
            cut1++;
            if (arr[i] == m) {
                flag1 = 1;
                break;
            }
        }
    if (flag1 == 0) printf("NO FOUND\n");
    //cut1次找到m；
    else printf("%d arr[%d] = %d\n", cut1, cut1 - 1, m);
    search(m);
    }
    return 0;
}



void search(int m) {
    int flag2 = 0, cut2 = 0;
    int min = 0, max = n - 1;
    int mid;
    //int mid = ((min + max) >> 1);
    //for ( ; min <= max; ) {
    while (min <= max) {
        cut2++;
        mid = min + (max - min) / 2;
        if (arr[mid] == m){
            flag2 = 1;
            break;
        }else if(arr[mid] < m) {
            printf("(%d) arr[%d] < %d, change [%d, %d] to [%d, %d]\n", cut2, mid, m, min, max, mid + 1, max);
            min = mid + 1;
        }
        else if (arr[mid] > m) {
            printf("(%d) arr[%d] > %d, change [%d, %d] to [%d, %d]\n", cut2, mid, m, min, max, min, mid - 1);
            max = mid - 1;
        }
    }
    if (flag2 == 0) printf("NO FOUND\n");
    else printf("%d arr[%d] = %d\n", cut2, mid, m);
    return ;
}
