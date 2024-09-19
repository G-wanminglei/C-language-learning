/*************************************************************************
	> File Name: 2.stdout.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 19 Sep 2024 09:14:17 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    printf("asdfghjkl");
    fflush(stdout);// 标准输出流的缓冲区遇到\n会触发将缓冲区内容输出到终端，或者利用fflush函数将缓冲区内容冲刷至终端；
    *((int *)(0)) = 5;
    return 0;
}
