/*************************************************************************
	> File Name: 4.student_system.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Thu 26 Sep 2024 08:13:47 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

//定义结构体类型；
typedef struct Student {
    long offset;
    char name[20];
    int age;
    int class;
    double height;
} Student;

//定义常量字符指针指向本地文件
const char *file_name =  "student_data.txt";
#define output_format "%10s%4d%6d%8.2lf"

//定义宏（结构体数组大小）；
#define MAX_N 10000
//定义结构体数组储存文件数据（程序的数据结构）；
Student stu_arr[MAX_N];
//定义整型对数组元素计数；
int stu_cut = 0;

//定义函数从文件读取数据至数组；
int read_from_file(Student *arr) {
    int i = 0;
    FILE *fp = fopen(file_name, "r");
    if (fp == NULL) return 0;
    while (1){
        arr[i].offset = ftell(fp);
        if (fscanf(fp, "%s", arr[i].name) == EOF) break;
        fscanf(fp, "%d", &arr[i].age);
        fscanf(fp, "%d", &arr[i].class);
        fscanf(fp, "%lf", &arr[i].height);
        fgetc(fp);
        i += 1;
    }
    fclose(fp);
    return i;
}

//定义函数从数组写入数据至文件；
long output_to_file(Student *arr, int n) {
    FILE *fp = fopen(file_name, "a");
    fseek(fp, 0, SEEK_END);
    long offset = ftell(fp);
    for (int i = 0; i < n; i++) {
        fprintf(fp, output_format "\n",
            arr[i].name, arr[i].age,
            arr[i].class, arr[i].height
            );
    }
    fclose(fp);
    return offset;
}

//定义清理文件数据函数；
void clear_file() {
    FILE *fp = fopen(file_name, "w");
    fclose(fp);
    return ;
}

//定义刷新文件数据函数（先清理再重新写入）；
void restor_data_to_file(Student *arr, int n) {
    clear_file();
    output_to_file(arr, n);
    return ;
}

//定向修改写入函数；
void modify_data_to_file(Student *stu) {
    FILE *fp = fopen(file_name, "r+");
    fseek(fp, stu->offset, SEEK_SET);
    fprintf(fp, output_format,
        stu->name, stu->age,
        stu->class, stu->height
        );
    return ;
}

//定义枚举变量，增加可读性；
enum NO_TYPE {
    LIST = 1,
    ADD,
    MODIFY,
    DELETE,
    QUIT
};

//定义交互界面函数；
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

//定义查询数据函数；
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

//定义增加数据函数；
void add_a_student(Student *arr) {
    list_students(arr);
    printf("add new item : (name, age, class, height)\n");
    printf("mysql > ");
    scanf("%s%d%d%lf", 
        arr[stu_cut].name, 
        &arr[stu_cut].age, 
        &arr[stu_cut].class, 
        &arr[stu_cut].height
    );
    arr[stu_cut].offset = output_to_file(stu_arr + stu_cut, 1);
    stu_cut += 1;
    printf("add a new student success\n");
    return ;
}

//定义修改数据函数；
void modify_a_student(Student *arr) {
    list_students(arr);
    int id;
    do {
        printf("modify id : ");
        scanf("%d", &id);
    } while (id < 0 || id >= stu_cut);
    printf("add new item : (name, age, class, height)\n");
    printf("mysql > ");
    scanf("%s%d%d%lf", 
        arr[id].name, 
        &arr[id].age, 
        &arr[id].class, 
        &arr[id].height
    );
    modify_data_to_file(arr + id);
    return ;
}

//定义删除文件数据函数；
void delete_a_student(Student *arr) {
    if (stu_cut == 0) {
        printf("there is no data\n");
        return ;
    }
    list_students(arr);
    int id, ch;
    do {
        printf("delete id : ");
        scanf("%d", &id);
    } while (id < 0 || id > stu_cut);
    char s[100];
    printf("confim (y / n) : ");
    while ((ch = getchar()) != '\n' && ch != EOF) {};
    scanf("%[^\n]", s);
    if (s[0] != 'y') return;
    for (int i = id + 1; i < stu_cut; i++) {
        long offset = arr[i - 1].offset;
        arr[i - 1] = arr[i];
        arr[i].offset = offset;
    }
    stu_cut -= 1;
    restor_data_to_file(arr, stu_cut);
}

int main() {
    stu_cut = read_from_file(stu_arr);
    while(1) {
        int no = usage();
        switch (no) {
            case LIST: list_students(stu_arr); break;
            case ADD: add_a_student(stu_arr); break;
            case MODIFY: modify_a_student(stu_arr); break;
            case DELETE: delete_a_student(stu_arr); break;
            case QUIT: printf("quit\n"); exit(0);
        }
    }
    return 0;
}
