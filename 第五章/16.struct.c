/*************************************************************************
	> File Name: 16.struct.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 07 Sep 2024 11:23:04 PM CST
 ************************************************************************/

#include<stdio.h>

//定义结构体类型；
typedef struct person {
    char name[20];
    int age;
    char gender;
    float height;
} person;

//间接访问（结构体指针->元素名）；
void output(struct person *p) {
    printf("use pointer p : %s, %d, %c, %f\n",
        p->name,
        p->age,
        p->gender,
        p->height
    );
    return ;
}

void set_buff(char *buff, int begin, int end, char ch) {
    while(begin < end) {
        buff[begin] = ch;
        begin++;
    }
    return ;
}

void output_person() {
    int n = sizeof(struct person), len = 0;
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
    struct person hug;
    set_buff(buff, hug.name - hug.name, sizeof(hug.name) + hug.name - hug.name, 'n');
    set_buff(buff, (char *)&hug.age - hug.name, sizeof(hug.age) + (char *)&hug.age - hug.name, 'a');
    set_buff(buff, &hug.gender - hug.name, sizeof(hug.gender) + &hug.gender - hug.name, 'g');
    set_buff(buff, (char *)&hug.height - hug.name, sizeof(hug.height) + (char *)&hug.height - hug.name, 'h');
    for(int i = 0; i < n; i++) {
        printf("%3c", buff[i]);
    }
    printf("\n");
}

int main() {
//定义结构体变量并初始化；
    struct person hug = {"Captain Hu", 18, 'M', 2.13};
    person su = {"Su", 49, 'M', 2.12};
//直接访问（变量名.元素名）访问结构体内元素；
    printf("%s, %d, %c, %f\n", hug.name, hug.age, hug.gender, hug.height);
//间接访问
    struct person *p = &hug;
    printf("*p : %s\n", p->name);
    output(&hug);
    output(&su);
    printf("sizeof(struct person) = %zu\n", sizeof(struct person));
    output_person();
    return 0;
}
