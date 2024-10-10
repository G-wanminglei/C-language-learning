/*************************************************************************
	> File Name: 12.user_interface.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Wed 09 Oct 2024 09:13:20 PM CST
 ************************************************************************/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int page_1_usage() {
    printf("\n");
    printf("1 : goto page 2\n");
    printf("2 : goto page 3\n");
    printf("3 : goto page 4\n");
    //利用do_while循环使得输入非法时循环输入直到输入合法；
    int x = -1;
    do {
        printf("input : ");
        scanf("%d", &x);
    } while (x < 1 || x > 3);
    printf("\n");
    return x;
}

int page_2_usage() {
    printf("\n");
    printf("0 : back to page 1\n");
    printf("1 : goto page 5\n");
    int x;
    do {
        printf("intput : ");
        scanf("%d", &x);
    } while (x < 0 || x > 1);
    printf("\n");
    return x;
}

void page_3_usage() {
    printf("\n");
    int arr[10], len = 0;
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < 10; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("-");
    }
    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n");
    return ;
}

int page_4_usage() {
    printf("\n");
    printf("0 : back to page 1\n");
    printf("1 : goto page 5\n");
    printf("\n");
    int x;
    do {
        printf("intput : ");
        scanf("%d", &x);
    } while (x < 0 || x > 1);
    printf("\n");
    return x;
}

void page_5_usage() {
    printf("\n");
    printf("hello, this is page5\n");
    printf("\n");
    return ;
}

int main() {
    srand((unsigned)time(NULL));
    int status = 1;
    while(1) {
        switch (status) {
            case 1: {
                printf("\n");
                printf("into page 1 :\n");
                int x = page_1_usage();
                if (x == 1) status = 2;
                else if (x == 2) status = 3;
                else if (x == 3) status = 4;
            } break;
            case 2: {
                printf("\n");
                printf("into page 2 :\n");
                int x = page_2_usage();
                if (x == 0) status = 1;
                else if (x == 1) status = 5;
            } break;
            case 3:{
                printf("\n");
                printf("into page 3 :\n");
                page_3_usage();
                status = 5;
            } break;
            case 4:{
                printf("\n");
                printf("into page 4 :\n");
                int x = page_4_usage();
                if (x == 0) status = 1;
                else if (x == 1) status = 5;
            } break;
            case 5:{
                printf("\n");
                printf("into page 5 :\n");
                page_5_usage();
                status = 1;
            } break;
        }
    }
    return 0;
}
