/*************************************************************************
	> File Name: 11.main_2.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 29 Jul 2024 10:43:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[], char **env) {
    //第一个int参数是命令行内命令数;
    //第二个char *是字符指针数组,每个字符指针指向一个命令字符串；
    //第二个char **是二维字符指针数组，指向环境变量；
    int flag = 0;
    //声明flag参数用来标记；
    for (char **p = env; p[0]; p++) {
    //char **指向第一个环境变量，如果p[0]不为空，p+1，循环遍历环境变量；
        if(strcmp(p[0], "LOGNAME=wanminglei") == 0) {
    //用strcmp函数比较两个字符串，相同返回值为零，条件成立；
            flag = 1;
    //flag置为1；
            break;
        }
    }
    if (flag == 0) {
        printf("error log name,please use wanminglei\n");
    }
    //如果flag = 0，打印错误信息；
    printf("argc = %d\n", argc);
    //打印命令数；
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    //通过循环遍历字符串并打印命令；
    }
    return 0;
}
