/*************************************************************************
	> File Name: 25.linklist_1.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 14 Sep 2024 02:34:53 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_OP 7
#define DL 3
#define STR(n) #n
#define DIGIT_LEN_STR(n) "%" STR(n) "d"

//链表定义；
typedef struct Link {
    int data;
    struct Link *next;
} Link;

//链表初始化；
Link *GetNewNode(int val) {
    Link *node = (Link *)malloc(sizeof(struct Link));
    node->data = val;
    node->next = NULL;
    return node;
}

//链表的插入；
Link *InsertNode_1(Link *head, int pos, int val) {
    if (pos == 0) {
        Link *insertnode = GetNewNode(val);
        insertnode->next = head;
        return insertnode;
    }
    Link *p = head;
    Link *insertnode = GetNewNode(val);
    for (int i = 0; i < pos - 1; i++) p = p->next;
    insertnode->next = p->next;
    p->next = insertnode;
    return head;
}

Link *InsertNode_2(Link *head, int pos, int val) {
    Link new_head;
    Link *p = &new_head;
    new_head.next = head;//创建一个虚拟的新的头节点，无头链表变成有头链表；
    Link *insertnode = GetNewNode(val);
    for (int i = 0; i < pos; i++) p = p->next;
    insertnode->next = p->next;
    p->next = insertnode;
    return new_head.next;
}

//清除链表；
void clear(Link *head) {
    if (head == NULL) return ;
    for (Link *p = head, *q; p != NULL; p = q) {
        q =p->next;
        free(p);
    }
    return ;
}

//打印链表；
void output_linklist(Link *head) {
    int len = 0;
    for (Link *p = head; p != NULL; p = p->next) len += 1;
    for (int i = 0; i < len; i++) {
        printf(DIGIT_LEN_STR(DL), i);
        printf("  ");
    }
    printf("\n");
    for (Link *p = head; p != NULL; p = p->next) {
        printf(DIGIT_LEN_STR(DL), p->data);
        printf("->");
    }
        printf("\n");
    return ;
}

int find(Link *head, int val) {
    int n = 0, flag = 0;
    for (Link *p = head; p; p = p->next) {
        if (p->data == val) {
            flag = 1;
            output_linklist(head);
            int len = n * (DL + 2) + 2;
            for(int i = 0; i < len; i++) {
                printf(" ");
            }
                printf("^\n");
            for(int i = 0; i < len; i++) {
                printf(" ");
            }
                printf("|\n");

        }
        n += 1;
    }
    return flag;
}

int main() {
    srand((unsigned int)time(NULL));
    Link *head = NULL;
    for (int i = 0; i < MAX_OP; i++) {
        int pos = rand() % (i + 1), val = rand() % 100;
        printf("insert %d at %d\n", val, pos);
        head = InsertNode_1(head, pos, val);
        output_linklist(head);
    }
    for (int i = 0; i < MAX_OP; i++) {
        int pos = rand() % (i + 1), val = rand() % 100;
        printf("insert %d at %d\n", val, pos);
        head = InsertNode_2(head, pos, val);
        output_linklist(head);
    }
    int val;
    while(~scanf("%d",&val)) {
        if(!find(head, val)) {
            printf("Not Find\n");
        }
    }
    clear(head);
    return 0;
}
