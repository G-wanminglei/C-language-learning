/*************************************************************************
	> File Name: 23.hex.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 11 Sep 2024 09:13:56 PM CST
 ************************************************************************/

#include<stdio.h>

union INT_NUMBER {
    struct {
        unsigned char b1:4;
        unsigned char b2:4;
    } bytes[4];
    unsigned int number;
};

char code(unsigned int x) {
    if(x < 10) return '0' + x;
    return x - 10 + 'a';
}

int main() {
    union INT_NUMBER n;
    n.number = 0x6a6b6c6d;
    printf("output result : ");
    for(int i = 3; i >= 0; i--) {
        printf("%c%c", code(n.bytes[i].b2), code(n.bytes[i].b1));
    }
    printf("\n");
    return 0;
}
