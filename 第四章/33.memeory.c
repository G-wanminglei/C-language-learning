/*************************************************************************
	> File Name: 33.memeory.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 15 Aug 2024 10:31:18 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    //动态申请一段内存空间；
    int *arr1 = (int *)malloc(sizeof(int) * 10);//malloc返回值为void *;
    for (int i = 0; i < 10; i++) {
        arr1[i] = rand() % 100;
    }
    for (int i = 0; i < 10; i++) {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }
    //动态申请一段内存空间并初始化0值；
    int *arr2 = (int *)calloc(10, sizeof(int));//calloc返回值为void *;
    /*for (int i = 0; i < 10; i++) {
        arr1[i] = rand() % 100;
    }*/
    for (int i = 0; i < 10; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }
    //释放动态申请的空间；（动态申请的空间在堆区，堆区是进程外的，栈区是线程的内存空间有固定大小）
    free(arr1);
    free(arr2);
    //s设置每个字节为一个固定值；
    void *memset(void *ptr, int value, size_t num);
    //ptr指要填充的内存块的指针，内存的首地址；value指要设置的值，虽然是int类型但只有低8位（一个字节）被用来填充内存，可以传递一个字符值；unm指要设置的字节数；
    
    //memcpy内存数据拷贝, 内存空间没有重叠；
    char s1[100] = "hello world";
    char s2[100];
    char s3[100];
    memcpy(s2, s1, 12);
    printf("%s\n", s2);
    memcpy(s2 + 4, s1, 12);//内存空间有重叠，拷贝失败；
    printf("memcpy + 4 = %s\n", s2);
    //memmove内存数据拷贝，可以处理内存空间有重叠；
    memmove(s3, s1, 12);
    printf("%s\n", s3);
    memmove(s3 + 4, s1, 12);//内存空间有重叠,拷贝成功；
    printf("memmove + 4 = %s\n", s3);
    return 0 ;
}
