/*************************************************************************
	> File Name: 14.HZOJ_145_2.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 10 Aug 2024 12:54:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    char str[100], s[100] = {0};
    int str_len, s_len;//s_len = -1;
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        //str_len = strlen(str);
        //if (str_len > s_len) {
        //strcpy(s, str);
        //s_len = str_len;
        //}
        str_len = strlen(str);
        s_len = strlen(s);
        if (str_len > s_len) {
            strcpy(s, str);
        }
    }
    printf("%s\n", s);
    return 0;
}
