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
static const char *table_file = "./data/class_data.dat";
static const char *header_name[] = {"name", "No.Stu", "master"};
static int header_len[] = {15, 7, 15};

typedef struct Student {
    char name[20];
    int NoStu;
    char master[20];
} table_data;

#include"table_unit.h"

void printData(void *__data) {
    table_data *data = (table_data *)(__data);
    char frm[100];
    sprintf(frm, "%%%ds|%%%dd|%%%ds|\n",
           header_len[0], header_len[1],
           header_len[2]
           );
    printf (frm, data->name, data->NoStu, data->master);
}

void scanData(void *__data) {
    table_data *data = (table_data *)(__data);
    scanf("%s%d%s", 
        data->name, &(data->NoStu), data->master
    );
    return ;
}
