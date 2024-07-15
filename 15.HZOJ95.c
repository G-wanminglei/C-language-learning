/*************************************************************************
	> File Name: 15.HZOJ95.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 15 Jul 2024 10:26:21 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[10];
    scanf("%s", s);
    sprintf(s, "%c%c", s[1], s[0]);
    printf("%s\n", s);
    return 0;
}
