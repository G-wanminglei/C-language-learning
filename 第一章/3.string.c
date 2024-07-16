/*************************************************************************
> File Name: 3.string.c
> Author:wanminglei 
> Mail:wanminglei@hotmail.com 
> Created Time: Thu 04 Jul 2024 08:52:29 PM CST
************************************************************************/

#include<stdio.h>

int main() {

    char s[100]="Hello World";
    printf("%s\n",s);
    scanf("%s", s);
    printf("scanf : %s\n", s);
    // while(getchar() != '\n');//循环，只要没有读到\n，getchar会一直读
    getchar();
    scanf("%[a-z]", s);
    printf("%%[a-z] : %s\n", s);

    return 0;
}
