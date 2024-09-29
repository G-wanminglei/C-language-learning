/*************************************************************************
	> File Name: 8.fseek_and_faccess.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 28 Sep 2024 06:06:14 PM CST
 ************************************************************************/

#include<stdio.h>

//01abc56789
void r_puls_access() {
    FILE *fp = fopen("data3.txt", "r+");
    fseek(fp, 5, SEEK_SET);
    int n;
    fscanf(fp, "%d", &n);
    printf("r+ : scanf n = %d\n", n); //56789
    fseek(fp, -5, SEEK_END);
    //fprintf(fp, "%d%d%d", 8, 7, 6);
    fprintf(fp, "876");
    fclose(fp);
    return ;
}

void w_puls_access() {
    FILE *fp = fopen("data5.txt", "w+");
    fprintf(fp, "hello world123456abc7890");
    fseek(fp, -4, SEEK_END);
    int n;
    fscanf(fp, "%d", &n);
    printf("w+ : n = %d\n", n);//7890
    fseek(fp, 12, SEEK_SET);
    fprintf(fp, "xyz");
    fclose(fp);
    return ;
}

void a_puls_access() {
    FILE *fp = fopen("data6.txt", "a+");
    fprintf(fp, "1234567890");
    fseek(fp, 0, SEEK_SET);
    fprintf(fp, "0987654321"); // ??????
    fseek(fp, 0, SEEK_SET);
    int n;
    fscanf(fp, "%4d", &n);
    printf("a+ : n = %d\n", n); // 1234 ?? 987
    fclose(fp);
    return ;
}

int main() {
    //r_puls_access();
    //w_puls_access();
    a_puls_access();
    return 0;
}
