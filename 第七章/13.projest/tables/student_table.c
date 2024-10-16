/*************************************************************************
	> File Name: student_table.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 12 Oct 2024 08:21:40 PM CST
 ************************************************************************/

#include<stdio.h>
#include<database.h>

//定义表示表名变量；
static const char *table_name = "student table";
static const char *table_file = "./data/student_data.dat";

typedef struct Student {
    char name[20];
    int age;
    int class;
    double height;
} table_data;

//声明相关表信息初始化函数；（表的初始化）
static void init_table(struct Database *);
static size_t getDataSize();
static void printData(void *);

//先于程序运行调用注册函数将表信息写入表库；（表库的初始化）
__attribute__((constructor))
static void __register_table() {
    register_table(table_name, init_table);
    return ;
}

//定义相关表信息初始化函数； （表的初始化）
void init_table(struct Database *db) {
    db->table_name  = table_name;
    db->table_file  = table_file;
    db->getDataSize = getDataSize;
    db->printData   = printData;
    return ;
}

size_t getDataSize() {
    return sizeof(table_data);
}

void printData(void *__data) {
    table_data *data = (table_data *)(__data);
    printf ("%15s%3d%3d%5.2lf\n", data->name, data->age, data->class, data->height);
}
