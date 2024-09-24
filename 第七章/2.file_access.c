/*************************************************************************
	> File Name: 2.file_access.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 23 Sep 2024 03:50:50 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void r_access() {
    FILE *fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("r: failed to open file\n");
        exit(1);
    }
    char s[100];
    fscanf(fp, "%[^\n]", s);
    printf("s = %s\n", s);
    fclose(fp);
    fp = fopen("temp.txt", "r");
    if (fp == NULL) {
        printf("r: failed to open file\n");
    }
    return ;
}

void rand_file_name(char *file_name, int n) {
    for (int i = 0; i < n; i++) {
        file_name[i] = rand() % 26 + 'a';
    }
    file_name[n] = 0;
    strcat(file_name, ".txt");
    return ;
}

void w_access() {
    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("w: failed to open file\n");
        exit(1);
    }
    fprintf(fp, "shenyang\n");
    fprintf(fp, "hello shenyang\n");
    fclose(fp);
    char file_name[100] = {0};
    rand_file_name(file_name, 5);
    fp = fopen(file_name, "w");
    printf("w open file_name = %s\n", file_name);
    if (fp == NULL) {
       printf("w: failed to open file\n");
        exit(1);
    }
    fclose(fp);
    return ;
}

void r_plus_access() {
    FILE *fp = fopen("data.txt", "r+");
    if (fp == NULL) {
        printf("r+: failed to open file\n");
        exit(1);
    }
    char s[100];
    fscanf(fp, "%s", s);
    printf("r+: s = %s\n", s);
    fprintf(fp, "000000");
    fclose(fp);
    fp = fopen("temp.txt", "r+");
    if (fp == NULL) {
        printf("r+: failed to open file\n");
    }
    return ;
}

void w_plus_access() {
    FILE *fp = fopen("data.txt", "w+");
    if (fp == NULL) {
        printf("w+: failed to open file\n");
        exit(1);
    }
    fprintf(fp, "hello shenyang\n");
    char s[100];
    fscanf(fp, "%s", s);
    printf("w+: s = %s\n", s);
    fclose(fp);
    char file_name[100] = {0};
    rand_file_name(file_name, 5);
    fp = fopen(file_name, "w+");
    printf("w+ open file_name = %s\n", file_name);
    if (fp == NULL) {
       printf("w: failed to open file\n");
        exit(1);
    }
    fclose(fp);
    return ;
}

int main() {
    srand((unsigned)time(NULL));
    r_access();
    w_access();
    r_plus_access();
    w_plus_access();
    return 0;
}
