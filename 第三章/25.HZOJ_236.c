/*************************************************************************
	> File Name: 25.HZOJ_236.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 03 Aug 2024 12:41:01 PM CST
 ************************************************************************/

#include<stdio.h>

void combined_enumerate(int i, int j, int n, int m);
//声明一个数组用来放枚举的结果；
int arr[10];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    combined_enumerate(0, 1, n, m);
}

//打印函数，将枚举结果按要求打印；
void print(int n) {
    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");
    return ;
}

//递归函数，按位枚举；
//i是当前枚举位置，j是i位枚举的最小值（和i同时迭代保证按字典序枚举）；
//n，m是条件限制；
void combined_enumerate(int i, int j, int n, int m) {
//边界条件，限制枚举次数
    if (i == m) {
        print(m);
        return ;
    }
//枚举过程，循环实现枚举第i位的可能性（向右枚举）；
//递归遍历每个节点同时缩小范围（向下枚举，左支枚举结束后返回上一节点继续枚举右支，遍历节点）；
//通过限制向右及向下范围进行剪支；
//循环内调用递归函数实现两个方向的迭代；
    for (int k = j; k <= n && k <= n - (m - 1 - i); k++) {
        arr[i] = k;
        combined_enumerate(i + 1, k + 1, n, m);
    }
    return ;
}
