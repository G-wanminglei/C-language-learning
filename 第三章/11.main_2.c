/*************************************************************************
	> File Name: 11.main_2.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 29 Jul 2024 10:43:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {
    //第一个int参数是命令行内命令数，第二个char *是字符指针数组；
    //每个字符指针指向一个字符串；
    if (strcmp(argv[0], "./bilibili")) {
        //strcmp比较两个字符串，前者大则返回大于零的值，反之返回小于零的值，相等返回0；
        printf("wrong call,please call : ./bilibili\n");
        return 0;
    }
    printf("right call\n");
    printf("argc = %d\n", argc);
    //打印命令数；
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    //通过循环遍历字符串并打印；
    }
    return 0;
}
