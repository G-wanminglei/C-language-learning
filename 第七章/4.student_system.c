/*************************************************************************
	> File Name: 4.student_system.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 26 Sep 2024 08:13:47 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

enum NO_TYPE {
    LIST = 1,
    ADD,
    MODIFY,
    DELETE,
    QUIT
};

typedef struct Student {
    char name[20];
    int age;
    int class;
    double height;
} Student;

const char *file_name =  "student_data.txt";
#define MAX_N 10000

Student stu_arr[MAX_N];
int stu_cut = 0;

int read_from_file(Student *arr) {
    int i = 0;
    FILE *fp = fopen(file_name, "r");
    if (fp == NULL) return 0;
    while (fscanf(fp, "%s", arr[i].name) != EOF) {
        fscanf(fp, "%d", &arr[i].age);
        fscanf(fp, "%d", &arr[i].class);
        fscanf(fp, "%lf", &arr[i].height);
        i += 1;
    }
    fclose(fp);
    return i;
}

int usage() {
    int no;
    do {
        printf("%d : list students\n", LIST);
        printf("%d : add a new students\n", ADD);
        printf("%d : modify student\n", MODIFY);
        printf("%d : delete student\n", DELETE);
        printf("%d : quit\n", QUIT);
        printf("mysql > ");
        scanf("%d", &no);
    } while (no < LIST || no > QUIT);
    return no;
}

void list_students(Student *arr) {
    int len = printf("%4s|%10s|%4s|%6s|%8s|", 
        "ID", "Name", "Age", "Class", "Hegiht"
    );
    printf("\n");
    for (int i = 0; i < len; i++) printf("=");
    printf("\n");
    for (int i = 0; i < stu_cut; i++) {
        printf("%4d|%10s|%4d|%6d|%8.2lf|\n", 
            i, arr[i].name, arr[i].age, 
            arr[i].class, arr[i].height
        );
    }
    return ;
}

int main() {
    stu_cut = read_from_file(stu_arr);
    while(1) {
        int no = usage();
        switch (no) {
            case LIST: list_students(stu_arr); break;
            case ADD: printf("add_\n"); break;
            case MODIFY: printf("modify_\n"); break;
            case DELETE: printf("delete_\n"); break;
            case QUIT: printf("quit\n"); exit(0);
        }
    }
    return 0;
}
