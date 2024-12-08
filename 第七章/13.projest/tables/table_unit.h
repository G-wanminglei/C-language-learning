
//声明相关表信息初始化函数；（表的初始化）
static void init_table(struct Database *);
static size_t getDataSize();
static void printData(void *);
static void scanData(void *);

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
    db->scanData    = scanData;
    db->header_name = header_name;
    db->header_len  = header_len;
    db->header_cut  = sizeof(header_len) / sizeof(header_len[0]);
    return ;
}

size_t getDataSize() {
    return sizeof(table_data);
}
