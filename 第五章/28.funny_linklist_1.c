/*************************************************************************
	> File Name: 27.funny_linklist.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 16 Sep 2024 09:34:02 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>

#define MAX_OP 10
#define start(addr, T, d) (T *)(((void *)addr) - offset(T, d))
#define offset(T, d) (size_t)(&(((T *)(0))->d))

enum NodeType {
    type_A,
    type_B,
    type_C,
    type_MAX
};

typedef struct Link {
    struct Link *next;
    enum NodeType type;
} Link;

struct A {
    int a;
    Link node;
    double b;
};

Link *getNode_A() {
    struct A *a = (struct A *)malloc(sizeof(struct A));
    a->a = 9;
    a->node.next = NULL;
    a->node.type = type_A;
    a->b = 9.99;
    return &(a->node);
}

void output_A(Link *p) {
    struct A *node = start(p, struct A, node); 
    printf("struct A: a = %d, b = %lf\n", node->a, node->b);
    return ;
}

struct B {
    char c;
    const char *s;
    Link node;
};

Link *getNode_B() {
    struct B *b = (struct B *)malloc(sizeof(struct B));
    b->c = 'B';
    b->s = "struct B";
    b->node.next = NULL;
    b->node.type = type_B;
    return &(b->node);
}

void output_B(Link *p) {
    struct B *node = start(p, struct B, node); 
    printf("struct B: c = %c, s = %s\n", node->c, node->s);
    return ;
}

struct C {
    Link node;
    long long d;
};

Link *getNode_C() {
    struct C *c = (struct C *)malloc(sizeof(struct C));
    c->node.next = NULL;
    c->node.type = type_C;
    c->d = INT64_MAX;
    return &(c->node);
}

void output_C(Link *p) {
    struct C *node = start(p, struct C, node); 
    printf("struct C: d = %lld\n", node->d);
    return ;
}

Link *(*getNode[type_MAX])() = {
    getNode_A, getNode_B, getNode_C
};

void (*output[type_MAX])(Link *) = {
    output_A, output_B, output_C
};

int main() {
    srand((unsigned)time(NULL));
    Link head, *p = &head;//有头链表；
    for (int i = 0; i < MAX_OP; i++) {
        p->next = getNode[rand() % type_MAX]();
        p = p->next;
    }
    for (p = head.next; p; p = p->next) {
        output[p->type](p);
    }
    return 0;
}
