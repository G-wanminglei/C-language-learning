/*************************************************************************
	> File Name: student_table.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 12 Oct 2024 08:21:40 PM CST
 ************************************************************************/

#include<stdio.h>
#include<database.h>

//定义表示表名变量；
static const char *table_name = "class table";

//声明相关表信息初始化函数；（表的初始化）
static void init_table(struct Database *);

//先于程序运行调用注册函数将表信息写入表库；（表库的初始化）
__attribute__((constructor))
static void __register_table() {
    register_table(table_name, init_table);
    return ;
}

//定义相关表信息初始化函数； （表的初始化）
void init_table(struct Database *db) {
    db->table_name = table_name;
    return ;
}
