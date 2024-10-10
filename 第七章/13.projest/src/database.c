/*************************************************************************
	> File Name: database.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 10 Oct 2024 08:53:15 PM CST
 ************************************************************************/

#include<stdio.h>
#include<database.h>

static enum OP_TYPE choose_table() {
    printf("choose table\n");
    printf("1 : table usage\n");
    printf("2 : quit\n");
    int x;
    do {
        printf("input : ");
        scanf("%d", &x);
    } while (x < 1 || x > 2);
    if (x == 1) return TABLE_USAGE;
    else return OP_END;
}

static enum OP_TYPE table_usage() {
    printf("1 : list table\n");
    printf("2 : add an item to table\n");
    printf("3 : modify an item in table\n");
    printf("4 : delete an item  table\n");
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

static enum OP_TYPE list_table() {
    printf("list table\n");
    return TABLE_USAGE;
};

static enum OP_TYPE add_table() {
    printf("add table\n");
    return TABLE_USAGE;
};

static enum OP_TYPE modify_table() {
    printf("modify table\n");
    return TABLE_USAGE;
};

static enum OP_TYPE delete_table() {
    printf("delete table\n");
    return TABLE_USAGE;
};

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

void run_database() {
    enum OP_TYPE status = CHOOSE_TABLE;
    while (1) {
        status = run(status);
        if (status == OP_END) break;
    }
    return ;
}
