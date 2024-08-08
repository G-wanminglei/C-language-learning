/*************************************************************************
	> File Name: 9.string.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 08 Aug 2024 09:59:42 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main() {
    char str1[10] = "abc";//只有定义的时候可以这样赋值；
    printf("str1 = %s\n", str1 );
    strcpy(str1, "def");//更改字符串内容用字符串复制函数操作,或者利用循环更改每个位置的元素；
    printf("str1 = %s\n", str1 );
    char str2[] = "hello\0 world";
    //strlen求字符串长度到\0截至，返回值类型size_t；
    printf("strlen(str2) = %zu\n", strlen(str2));
    //sizeof求所占字节，对象为字符串时包含结束符\0，返回值类型size_t；
    printf("sizeof(str2) = %zu\n", sizeof(str2));
    //printf打印时遇\0截至；
    printf("%s\n", str2);
    str2[5] = 'A';//将字符串下标5的元素赋值为'A';
    printf("%s\n", str2);
    char str3[] = "abcdef";
    char str4[] = "abc";
    //strcmp按位（ACSII码值)比较两个字符串的大小，前者大于后者返回值大于0，相等返回0，前者小于后者返回值小于0；
    printf("strcmp(str3, str4) = %d\n", strcmp(str3, str4));//返回值为按位比较到下标为3的元素'd' - '\0' = 100;
    str3[3] = '\0';//str3 = "abc\0ef";
    printf("strcmp(str3, str4) = %d\n", strcmp(str3, str4));

    int arr[10];
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %4d  ", i, arr[i]);
    }
    printf("\n");
    //memset内存设置函数，第一个参数为要设置的起始地址，第二个参数为要设置的值，第三个参数为自起始位向后设置n个字节；
    memset(arr, 0, sizeof(int) * 10); //40, sizeof(arr);
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %4d  ", i, arr[i]);
    }
    printf("\n");
    //赋值为-1时，由于-1为补码表示，每个字节置为1111 1111，每个元素转换成int值还为-1，预期相符；
    memset(arr, -1, sizeof(int) * 10); //40, sizeof(arr);
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %4d  ", i, arr[i]);
    }
    printf("\n");
    //将每个字节赋值为2，就是将每个字节赋值为0000 0010，每个int值为02020202（十六进制），与预期不符，memset用于置0或置-1；
    memset(arr, 2, sizeof(int) * 10); // 40, sizeof(arr);
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = %d (%x)\n", i, arr[i], arr[i]);
    }
    return 0;
}
