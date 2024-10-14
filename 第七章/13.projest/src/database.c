/*************************************************************************
	> File Name: database.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 10 Oct 2024 08:53:15 PM CST
 ************************************************************************/

#include<stdio.h>
#include<database.h>

//定义表库及表数量变量；
struct TableInfo tables[100];
int table_cnt = 0;

//定义结构体变量存储表信息；
struct Database db;

//注册表信息函数；
void register_table(const char *table_name, InitTable_T init_table) {
    tables[table_cnt].table_name = table_name;
    tables[table_cnt].init_table = init_table;
    table_cnt += 1;
    return ;
}

//选择表函数；
static enum OP_TYPE choose_table() {
    for (int i = 0; i < table_cnt; i++) {
        printf("%d : %s\n", i, tables[i].table_name);
    }
    printf("%d : quit\n", table_cnt);
    int x;
    do {
        printf("input : ");
        scanf("%d", &x);
    } while (x < 0 || x > table_cnt);
    if (x < table_cnt) {
        tables[x].init_table(&db);
        return TABLE_USAGE;
    }
    else return OP_END;
}

//操作表函数；
static enum OP_TYPE table_usage() {
    printf("1 : list %s\n", db.table_name);
    printf("2 : add an item to %s\n", db.table_name);
    printf("3 : modify an item in %s\n", db.table_name);
    printf("4 : delete an item  %s\n", db.table_name);
    printf("5 : back\n");
    int x;
    do {
        printf("input : ");
        scanf ("%d", &x);
    } while (x < 1 || x > 5);
    if (x == 1) return LIST_TABLE;
    else if (x == 2) return ADD_TABLE;
    else if (x == 3) return MODIFY_TABLE;
    else if (x == 4) return DELETE_TABLE;
    else return CHOOSE_TABLE;
}

//查询表信息函数；
static enum OP_TYPE list_table() {
    printf("list table\n");
    return TABLE_USAGE;
};

//增加表信息函数；
static enum OP_TYPE add_table() {
    printf("add table\n");
    return TABLE_USAGE;
};

//修改表信息函数；
static enum OP_TYPE modify_table() {
    printf("modify table\n");
    return TABLE_USAGE;
};

//删除表信息函数；
static enum OP_TYPE delete_table() {
    printf("delete table\n");
    return TABLE_USAGE;
};

//用户界面选择函数；
enum OP_TYPE run(enum OP_TYPE status) {
    switch (status) {
        case CHOOSE_TABLE: {
            return choose_table();
        } break;
        case TABLE_USAGE: {
            return table_usage();
        } break;
        case LIST_TABLE: {
            return list_table();
        } break;
        case ADD_TABLE: {
            return add_table();
        } break;
        case MODIFY_TABLE: {
            return modify_table();
        } break;        
        case DELETE_TABLE: {
            return delete_table();
        } break;
        default : {
            printf("unknown status : %d\n", status);
        } break;
    }
    return OP_END;
}

//程序入口定义；
void run_database() {
    enum OP_TYPE status = CHOOSE_TABLE;
    while (1) {
        status = run(status);
        if (status == OP_END) break;
    }
    return ;
}
