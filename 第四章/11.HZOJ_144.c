/*************************************************************************
	> File Name: 10.HZOJ_144.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Fri 09 Aug 2024 09:59:42 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {
    char str[105];//定义一个字符数组，当用scanf读入并且用%s占位符s时，最后一位会被添加\0结束符；
    int cut = 0;
    scanf("%s", str);
    for (int i = 0, n = strlen(str); i < n; i++) {
        if (str[i] == 'A') cut++;
    }
    printf("%d\n", cut);
    return 0;
}
