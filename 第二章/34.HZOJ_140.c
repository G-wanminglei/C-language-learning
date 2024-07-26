/*************************************************************************
	> File Name: 34.HZOJ_140.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 26 Jul 2024 09:18:02 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++) {  //打印2n-1行 
        int a_num = 2 * n - 2 * abs(i - n + 1) - 1;  //字母数量
        int b_num = abs(i - n + 1);  //空格数量
        char ch = 'A' + n - 1;  //中间行字母
        for (int j = 0; j < b_num; j++) printf(" ");  //打印空格
        for (int k = 0; k < a_num; k++) {
            printf("%c", ch - b_num);  //打印字母
        }
        printf("\n");
    }
    return 0;
}
