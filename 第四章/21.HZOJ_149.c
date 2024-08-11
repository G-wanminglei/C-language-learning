/*************************************************************************
	> File Name: 21.HZOJ_149.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 11 Aug 2024 10:42:03 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {
    char s[55];
    int s_len = 0;
    //scanf("%s", s) != EOF等同于~scanf("%s", s);
    while (~scanf("%s", s)) {
        getchar();
        s_len = strlen(s);
    }
    printf("%d\n", s_len);
    return 0;
}
