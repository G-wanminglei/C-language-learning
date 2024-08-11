/*************************************************************************
	> File Name: 19.HZOJ_148.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sun 11 Aug 2024 10:19:13 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main() {
    char str[55];
    scanf("%s", str);
    //设置i，j指针指向字符串首尾两端，交换后同时向中间移动；
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        //异或操作是自己的逆运算，1 ^ 0 = 1;
        str[i] ^= str[j];  //a = a ^ b = c;
        str[j] ^= str[i];  //b = c ^ b = a;
        str[i] ^= str[j];  //c = c ^ a = b;
    }
    printf("%s\n", str);
    return 0;
}
