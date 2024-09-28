/*************************************************************************
	> File Name: 7.fseek_position.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 28 Sep 2024 05:43:11 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    FILE *fp = fopen("data4.txt", "w");
    fprintf(fp, "0123456789");
    fseek(fp, -4, SEEK_CUR); //往前移动4位；
    fprintf(fp, "xy");
    fseek(fp, -3, SEEK_END); //往前移动3位；
    fprintf(fp, "z");

    fseek(fp, 0, SEEK_SET); //begin
    fseek(fp, 0, SEEK_END); //end
    fclose(fp);
    return 0;
}
