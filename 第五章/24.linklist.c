/*************************************************************************
	> File Name: 24.linklist.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 12 Sep 2024 08:27:02 PM CST
 ************************************************************************/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//链表的定义（无头链表）；
typedef struct Node {
    int data;           //节点存储的值；
    struct Node *next;  //指向下一个节点的指针；
} Node;

//链表的初始化（传入待插入的值val）；
Node *getNewNode(int val) {
    Node *p = (Node *)malloc(sizeof(Node));
    p->data = val;
    p->next = NULL;
    return p;
}

//链表的插入（传入链表首地址head，待插入位置pos，插入的值val）；
Node *insert(Node *head, int pos, int val) {
    //如果要插入的节点位置为头节点，链表的地址会发生改变；
    if (pos == 0) {
        Node * p = getNewNode(val);
        p->next = head;
        return p;
    }
    Node *p = head;
    for (int i = 0; i < pos - 1; i++) p = p->next; //通过p的迭代查找待插入位置前一位节点，获得待插入位后一位节点地址；
    Node *node = getNewNode(val);
    node->next = p->next; 
    p->next = node;
    return head;
}

//链表的销毁（传入链表首地址）；
void clear(Node *head) {
    if (head == NULL) return ;  //如果链表为空直接返回；
    for (Node *p = head , *q; p != NULL; p = q) {  //链表销毁要遍历每个节点逐个释放空间，注意释放前保留下一节点地址，否则会造成内存泄漏；
        q = p->next;
        free(p);
    }
}

//打印链表；
void output_linklist(Node *head) {
    int len = 0;
    for (Node *p = head; p != NULL; p = p->next) len += 1;
    for (int i = 0; i < len; i++) {
        printf("%3d", i);
        printf("  ");
    }
    printf("\n");
    for (Node *p = head; p != NULL; p = p->next) {
        printf("%3d", p->data);
        printf("->");
    }
    printf("\n\n");
    return ;
}

int main() {
    //测试功能；
    srand((unsigned int)time(NULL));
    #define MAX_OP 7
    Node *head = NULL;
    for (int i = 0; i < MAX_OP; i++) {
        int pos = rand() % (i + 1), val = rand() % 100;
        printf("insert %d at %d to linklist\n", val, pos);
        head = insert(head, pos, val);
        output_linklist(head);
    }
    return 0;
}
