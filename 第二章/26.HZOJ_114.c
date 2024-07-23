/*************************************************************************
	> File Name: HZOJ_114.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Tue 23 Jul 2024 04:34:33 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char s[10];
    const char *name;
    scanf("%s", s);
    switch(s[0]) {
        case 'h': printf("He\n"); break;
        case 'l': printf("Li\n"); break;
        case 'c': printf("Cao\n"); break;
        case 'd': printf("Duan\n"); break;
        case 'w': printf("Wang\n"); break;
        default : printf("Not Here\n"); break;
    }
    switch(s[0]) {
        case 'h': name = "He"; goto PRINT;
        case 'l': name = "Li"; goto PRINT;
        case 'c': name = "Cao"; goto PRINT;
        case 'd': name = "Duan"; goto PRINT;
        case 'w': name = "Wang"; goto PRINT;
        default : printf("Not Here\n"); break;
PRINT:
        printf("%s\n", name); break;
    } 
    return 0;
}
