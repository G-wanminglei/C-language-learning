/*************************************************************************
	> File Name: database.h
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 10 Oct 2024 08:51:28 PM CST
 ************************************************************************/

#ifndef _DATABASE_H
#define _DATABASE_H

enum OP_TYPE {
    CHOOSE_TABLE,
    TABLE_USAGE,
    OP_END,
    LIST_TABLE,
    ADD_TABLE,
    MODIFY_TABLE,
    DELETE_TABLE
};

void run_database();

#endif
