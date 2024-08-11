/*************************************************************************
	> File Name: 17.HZOJ_148.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 11 Aug 2024 09:49:27 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {
    char str[55];
    scanf("%s", str);
    for (int i = strlen(str); i > 0; i--) {
         printf("%c", str[i - 1]);
    }
    printf("\n");
    return 0 ;
}
