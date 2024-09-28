/*************************************************************************
	> File Name: fseek_and_ftell.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 28 Sep 2024 05:11:54 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    FILE *fp = fopen("data3.txt", "w");
    printf("ftell(fp) = %ld\n", ftell(fp));
    fprintf(fp, "0123456789");
    printf("after printf 0123456789 ftell(fp) = %ld\n", ftell(fp));
    fseek(fp, 2, SEEK_SET);
    printf("after fseek(2) ftell(fp) = %ld\n", ftell(fp));
    fprintf(fp, "abc");
    printf("after printf abc ftell(fp) = %ld\n", ftell(fp));
    fclose(fp);
    return 0;
}
