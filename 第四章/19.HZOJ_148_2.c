/*************************************************************************
	> File Name: 19.HZOJ_148.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 11 Aug 2024 10:19:13 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {
    char str[55];
    scanf("%s", str);
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        char ch;
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
    printf("%s\n", str);
    return 0;
}
