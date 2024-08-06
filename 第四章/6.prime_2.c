/*************************************************************************
	> File Name: 6.prime_2.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Tue 06 Aug 2024 10:15:32 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>

int prime[100] = {0};
bool arr[100];
int m = 0;
void init_prime(int n);

int main() {
    int n;
    scanf("%d", &n);
    init_prime(n);
    printf("There are %d prime within %d\n", m, n);
    for (int i = 0; i <= (m - 1); i++) {
        printf("%d ", prime[i]);
    }
    printf("\n");
    return 0;
}

void init_prime(int n) {
//遍历2到n所有数，覆盖n以内所有合数；
    for (int i = 2; i <= n; i++) {
//未被标记的是素数放进prime数组；
//当遍历到i时，i如果是合数一定被之前的数据筛掉；
        if (!arr[i]) prime[m++] = i;
//prime[j] <= n / i可以写成j < m,但要在循环体内对prime[j] * i > n 进行限制；
        for (int j = 0; prime[j] <= n / i; j++) {
            arr[prime[j] * i] = true;
            printf("%d * %d  falg  %d    \n", i, prime[j], prime[j] * i);
//当prime[j]能整除i时，因为是第一个能整除i的质数，所以j是i的最小质因数；
//j也就是prime[j] * i的最小质因数，**保证每个合数只被最小质因数筛掉**；
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

