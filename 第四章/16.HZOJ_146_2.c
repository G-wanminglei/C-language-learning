/*************************************************************************
	> File Name: 15.HZOJ_146.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 11 Aug 2024 04:57:30 PM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int main() {
    char str[55];
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {        //isalpha是判断是否为英文字母的函数，isalnum是判断是否为数字的函数，islower/isupper分别判断小写字母/大写字母；
            if (str[i] == 'Z' || str[i] == 'z') {
                str[i] = str[i] - 25;
            }else str[i] = str[i] + 1;
        }
    }
    printf("%s\n", str);
    return 0;
}
