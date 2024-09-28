/*************************************************************************
	> File Name: 6.fscanf_and_fseek.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 28 Sep 2024 05:25:55 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    FILE *fp = fopen("data3.txt", "r");
    int n;
    fseek(fp, 5, SEEK_SET);
    fscanf(fp, "%d", &n);
    printf("fscanf n = %d\n", n);
    fclose(fp);
    return 0;
}
