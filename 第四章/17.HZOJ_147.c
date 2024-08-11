/*************************************************************************
	> File Name: 17.HZOJ_147.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 11 Aug 2024 10:35:16 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

char s[10005];

int main() {
    scanf("%s", s);
    //ACSII码中奇数对应的也是奇数，偶数对应的也是偶数；
    if (s[strlen(s) - 1] % 2) {
        printf("NO\n");
    }else printf("YES\n");
    return 0;
}
