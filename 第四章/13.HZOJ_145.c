/*************************************************************************
	> File oiName: 11.HZOJ_145.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 09 Aug 2024 10:24:22 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {
    int n;
    scanf("%d", &n);
    char name[n][100];
    char s[100] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%99s", name[i]);
        strcpy(s, strlen(name[i]) > strlen(s) ? name[i] : s);
    }
    printf("%s\n", s);
    return 0;
}
