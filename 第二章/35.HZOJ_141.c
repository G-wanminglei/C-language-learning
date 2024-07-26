/*************************************************************************
	> File Name: 35.HZOJ_141.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 26 Jul 2024 09:52:23 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n + 1; i++) {    //打印2n+1行
        int a_num = 2 * abs(i - n) + 1;      //每行字母数量
        int b_num = n - abs(i - n);          //每行空格数量
        char ch = 'A' + n;               //每行中间字母
        for (int j = 0; j < b_num; j++) printf("  ");//打印空格
        for (int k = 0; k < a_num; k++) {
            printf("%c", ch - abs(k - a_num  / 2));  //第一种先算每行中间字母向两边递减
            printf("%c", 'A' + b_num + a_num / 2 - abs(k - a_num / 2));  //第二种先算首字母再算中间字母向两边递减
         }
        printf("\n");
    }
    return 0;
}
