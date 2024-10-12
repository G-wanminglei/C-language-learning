/*************************************************************************
	> File Name: student_table.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 12 Oct 2024 08:21:40 PM CST
 ************************************************************************/

#include<stdio.h>
#include<database.h>

static const char *table_name = "student table";

__attribute__((constructor))
    static void __register_table() {
        register_table(table_name);
        return ;
    }
