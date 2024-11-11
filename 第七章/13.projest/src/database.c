/*************************************************************************
	> File Name: database.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 10 Oct 2024 08:53:15 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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

//删除链表节点函数；
static void destroyTableData(struct table_data *p) {
    free(p->data);
    free(p);
    return ;
}

//CHOOSE_TABLE

//封装数据链表至db.table_data;
static struct table_data *getNewTableDasa(void *data, long offset) {
    struct table_data *p = (struct table_data *)malloc(sizeof(struct table_data));
    p->data = malloc(db.getDataSize());
    memcpy(p->data, data, db.getDataSize());
    p->offset = offset;
    p->next = NULL;
    return p;
}

//清空数据函数；
static void clear_table() {
    struct table_data *p = db.head.next, *q;
    while (p) {
        q = p->next;
        destroyTableData(p);
        p = q;
    }
    return ;
}

//关闭数据文件函数；
static void close_table() {
    clear_table();
    if (db.table == NULL) return;
    fclose(db.table);
    return ;
}

//加载二进制数据至db变量；
static void load_table_data() {
    char buff[db.getDataSize()];
    struct table_data *p = &(db.head);
    int data_cnt = 0;
    while (1) {
        long offset = ftell(db.table);
        if (fread(buff, db.getDataSize(), 1, db.table) == 0) break;
        p->next = getNewTableDasa(buff, offset);
        p = p->next;
        data_cnt += 1;
    }
    printf("load data success : %d itemm\n", data_cnt);
    return ;
}

//加载相关表的数据函数；
static void open_table() {
    db.table = fopen(db.table_file, "rb+");
    if (db.table == NULL) {
        printf("can't open file : %s\n", db.table_file);
        exit(1);
    }
    load_table_data();
    return ;
}

//LIST_TABLE

//打印表头函数；
void printTableHeader() {
    int len = 0;
    len += printf("%5s|", "id");
    char frm[100];
    for (int i = 0; i < db.header_cut; i++) {
        sprintf(frm, "%%%ds|", db.header_len[i]);
        len += printf(frm, db.header_name[i]);
    }
    printf("\n");
    for (int i = 0; i < len; i++) printf("-");
    printf("\n");
    return ;
}

//ADD_TABLE

//添加数据至文件末尾函数；
static long add_one_table_data(void *buff) {
    fseek(db.table, 0, SEEK_END);
    long offset = ftell(db.table);
    struct table_data *p = &(db.head);
    while (p->next) p = p->next;
    p->next = getNewTableDasa(buff, offset);
    fwrite(buff, db.getDataSize(), 1, db.table);
    fflush(db.table);
    return offset;
}

//MODIFY_TABLE

//列出数据返回数据数量
static int __list_table() {
    struct table_data *p = db.head.next;
    int id = 0;
    printTableHeader();
    while (p) {
        printf("%5d|", id);
        db.printData(p->data);
        p = p->next;
        id += 1;
    }
    return id;
};

//覆盖数据函数；
static void modify_one_table_data(void *buff, int id) {
    struct table_data *p = db.head.next;
    for (int i = 0; i < id; i++) p = p->next;
    memcpy(p->data, buff, db.getDataSize());
    fseek(db.table, p->offset, SEEK_SET);
    fwrite(buff, db.getDataSize(), 1, db.table);
    fflush(db.table);
    return ;
}

//DELETE_TABLE

//清空文件及链表函数；
static void clearTableData() {
    fclose(db.table);
    db.table = fopen(db.table_file, "w");
    fclose(db.table);
    db.table = fopen(db.table_file, "rb+");
    struct table_data *p = db.head.next, *q;
    while (p) {
        q = p->next;
        destroyTableData(p);
        p = q;
    }
    db.head.next =  NULL;
    return ;
}

//重新加载链表数据至文件函数；
static void restoreTableData() {
    struct table_data *p = db.head.next, *q;
    db.head.next = NULL;
    clearTableData();
    while (p) {
        q = p->next;
        p->offset = add_one_table_data(p->data);
        destroyTableData(p);
        p = q;
    }
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
        close_table();
        tables[x].init_table(&db);
        open_table();
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
    struct table_data *p = db.head.next;
    int id = 0;
    printTableHeader();
    while (p) {
        printf("%5d|", id);
        db.printData(p->data);
        p = p->next;
        id += 1;
    }
    return TABLE_USAGE;
};

//增加表信息函数；
static enum OP_TYPE add_table() {
    printf("add new item : (");
    for (int i = 0; i < db.header_cut; i++) {
        if (i) printf(",");
        printf("%s", db.header_name[i]);
    }
    printf(")\n");
    printf("input : ");
    char buff[db.getDataSize()];
    db.scanData(buff);
    add_one_table_data(buff);
    printf("add one item to %s : succress\n\n", db.table_name);
    return TABLE_USAGE;
};

//修改表信息函数；
static enum OP_TYPE modify_table() {
    int n = __list_table();
    int id;
    do {
        printf("modify id (%d back): ", n);
        scanf("%d", &id);
    } while (id < 0 || id > n);
    if (id == n) return TABLE_USAGE;
    printf("modify item(id = %d) : (", id);
    for (int i = 0; i < db.header_cut; i++) {
        if (i) printf(",");
        printf("%s", db.header_name[i]);
    }
    printf(")\n");
    printf("input : ");
    char buff[db.getDataSize()];
    db.scanData(buff);
    modify_one_table_data(buff, id);
    printf("modify one item at %s : succress\n\n", db.table_name);
    return TABLE_USAGE;
};

//删除表信息函数；
static enum OP_TYPE delete_table() {
    int n = __list_table();
    int id;
    do {
        printf("delete id (%d back): ", n);
        scanf("%d", &id);
    } while (id < 0 || id > n);
    if (id == n) return TABLE_USAGE;
    struct table_data *p = &(db.head), *q;
    for (int i = 0; i < id; i++) p = p->next;
    q = p->next;
    p->next = q->next;
    destroyTableData(q);
    restoreTableData();
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
