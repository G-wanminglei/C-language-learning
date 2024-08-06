/*************************************************************************
	> File Name: 5.prime.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Tue 06 Aug 2024 08:39:39 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdbool.h>


bool prime[100] = {0};//定义一个布尔数组初始化为false（不初始化默认为false）；
void init_prime(int n);

int main() {
    int n;
    scanf("%d", &n);
    init_prime(n);
    printf("prime(%d) = ", n);
    for (int i = 0; i < n; i++) {
//合数被标记为true，遍历每个元素，标记为false的为质数输出；
        if (!prime[i]) {
            printf("%d ", i);
        }
    }
        printf("\n");
    return 0;
}

void init_prime(int n) {
    prime[0] = prime[1] = true;//特殊的0和1标记为true；
    for (int i = 2; i * i <= n; i++) {
//遍历2到根号n，如果没被标记为true，就把它的倍数都标记为true；
//每个合数一定有一个小于或等于本身开根号的质因子，所以2到根号n的倍数会覆盖n以内所有合数；
//如果小于i的质数都不是i的因子，那么i一定是质数；
        if (prime[i]) continue;
        printf("%d is prime:\n", i);
//从i*i开始遍历是因为小于i*i的i的倍数已经被小于i的筛出去了；
        for(int j = i * i; j <= n; j += i) {
//把合数标记为true；
            prime[j] = true;
            printf(" %d ", j);
        }
        printf("\n");
    }
    return ;
}
