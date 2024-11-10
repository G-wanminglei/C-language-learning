/*************************************************************************
	> File Name: database.h
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 10 Oct 2024 08:51:28 PM CST
 ************************************************************************/

#ifndef _DATABASE_H
#define _DATABASE_H

//1.界面；

//定义枚举变量表示用户界面；
enum OP_TYPE {
    CHOOSE_TABLE,
    TABLE_USAGE,
    OP_END,
    LIST_TABLE,
    ADD_TABLE,
    MODIFY_TABLE,
    DELETE_TABLE
};

//2.表信息；

//db变量中存储数据的结构体；
struct table_data {
    void *data;
    long offset;
    struct table_data *next;
};

//定义结构体类型表示相关表信息；
struct Database {
    FILE *table;
    const char *table_name;
    const char *table_file;
    const char **header_name;
    int header_cut;
    int *header_len;
    struct table_data head;
    size_t (*getDataSize)();
    void (*printData)(void *);
    void (*scanData)(void *);
};

//声明结构体类型变量db存储相关信息；
extern struct Database db;

//db初始化函数指针；
typedef void (*InitTable_T)(struct Database *);

//3.表库；

//声明表库结构体类型；
struct TableInfo {
    const char *table_name;
    InitTable_T init_table;
};

//声明注册函数；(将表信息写入表库)
void register_table(const char *, InitTable_T);

//4.流程；

//声明程序入口函数；
void run_database();

#endif
