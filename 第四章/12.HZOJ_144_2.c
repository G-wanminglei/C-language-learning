/*************************************************************************
	> File Name: 12.HZOJ_144_2.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 10 Aug 2024 11:29:14 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char str[105];
    int cut = 0;
    scanf("%s", str);
    //str[i]; 等价于 str[i] != 0; 等价于 str[i] != \n;
    for (int i = 0; str[i]; i++) {
        cut += (str[i] == 'A');//等价于if (str[i] == 'A') cut++；
    }
    printf("%d\n", cut);
    return 0;
}
