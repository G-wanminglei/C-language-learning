/*************************************************************************
	> File Name: 12.user_interface.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 09 Oct 2024 09:13:20 PM CST
 ************************************************************************/

#include<stdio.h>

int page_1_usage() {
    printf("1 : goto page 2\n");
    printf("2 : goto page 3\n");
    printf("3 : goto page 4\n");
    //利用do_while循环使得输入非法时循环输入直到输入合法；
    int x = -1;
    do {
        printf("input : \n");
        scanf("%d", &x);
    } while (x < 1 || x > 3);
    return x;
}

int main() {
    int status = 1;
    while(1) {
        switch (status) {
            case 1: {
                printf("into page 1 :\n");
                int x = page_1_usage();
                if (x == 1) status = 2;
                else if (x == 2) status = 3;
                else if (x == 3) status = 4;
            } break;
            case 2: {
                printf("into page 2 :\n");
                status = 1;
            } break;
            case 3:{
                printf("into page 3 :\n");
                status = 1;
            } break;
            case 4:{
                printf("into page 4 :\n");
                status = 1;
            } break;
            case 5:{
                printf("into page 5 :\n");
                status = 1;
            } break;
        }
    }
    return 0;
}
