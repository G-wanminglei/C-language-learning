/*************************************************************************
	> File Name: 18.struct_size.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 09 Sep 2024 07:28:26 PM CST
 ************************************************************************/

#include<stdio.h>

void set_buff(char *buff, void *head, void *begin, void *end, char ch) {
    while(begin < end) {
        buff[begin - head] = ch;
        begin++;
    }
    return ;
}

#ifdef STRUCT_A

struct A {
    char a;
    int b;
    short c;
};

void output_struct() {
    int n = sizeof(struct A), len = 0;
    char buff[n];
    for(int i = 0; i < n; i++) {
        buff[i] = '.';
    }
    for(int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for(int i = 0; i < len; i++) {
        printf("%c", '-');
    }
    printf("\n");
    struct A a;
    set_buff(buff, &a.a, &a.a, sizeof(char) + (char *)&a.a, 'a');
    set_buff(buff, &a.a, &a.b, sizeof(int) + (char *)&a.b, 'b');
    set_buff(buff, &a.a, &a.c, sizeof(short) + (char *)&a.c, 'c');
    for(int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
}

#endif

#ifdef STRUCT_B

struct B {
    char a;
    short b;
    int c;
};

void output_struct() {
    int n = sizeof(struct B), len = 0;
    char buff[n];
    for(int i = 0; i < n; i++) {
        buff[i] = '.';
    }
    for(int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for(int i = 0; i < len; i++) {
        printf("%c", '-');
    }
    printf("\n");
    struct B b;
    set_buff(buff, &b.a, &b.a, sizeof(char) + (char *)&b.a, 'a');
    set_buff(buff, &b.a, &b.b, sizeof(short) + (char *)&b.b, 'b');
    set_buff(buff, &b.a, &b.c, sizeof(int) + (char *)&b.c, 'c');
    for(int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
}

#endif

#ifdef STRUCT_C
#pragma pack(1)
struct C {
    char a;
    short b;
    int c;
};

void output_struct() {
    int n = sizeof(struct C), len = 0;
    char buff[n];
    for(int i = 0; i < n; i++) {
        buff[i] = '.';
    }
    for(int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for(int i = 0; i < len; i++) {
        printf("%c", '-');
    }
    printf("\n");
    struct C c;
    set_buff(buff, &c.a, &c.a, sizeof(char) + (char *)&c.a, 'a');
    set_buff(buff, &c.a, &c.b, sizeof(short) + (char *)&c.b, 'b');
    set_buff(buff, &c.a, &c.c, sizeof(int) + (char *)&c.c, 'c');
    for(int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
}

#endif

int main() {
    output_struct();
    return 0;
}
