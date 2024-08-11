/*************************************************************************
	> File Name: 15.HZOJ_146.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 11 Aug 2024 04:57:30 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {
    char str[55];
    scanf("%s", str);
    for (int i = 0, n = strlen(str); i < n; i++) {
        if (str[i] == 'Z' || str[i] == 'z') {
            str[i] = str[i] - 25;
        }else if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z')) {
            str[i] = str[i] + 1;
        }
    }
    printf("%s\n", str);
    return 0;
}
