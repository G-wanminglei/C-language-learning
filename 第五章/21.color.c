/*************************************************************************
	> File Name: 21.color.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Mon 09 Sep 2024 10:21:39 PM CST
 ************************************************************************/

#include<stdio.h>

#ifdef PLAN_A

#define COLOR_SET_RED(msg) printf("\033[1;31m"#msg"\n\033[m")
#define COLOR_SET_GREEN(msg) printf("\033[1;32m"#msg"\n\033[m")
#define COLOR_SET_YELLOW(msg) printf("\033[1;33m"#msg"\n\033[m")
#define COLOR_SET_BLUE(msg) printf("\033[1;34m"#msg"\n\033[m")

int main() {
    COLOR_SET_RED(黄静好);
    COLOR_SET_GREEN(黄静好);
    COLOR_SET_YELLOW(黄静好);
    COLOR_SET_BLUE(黄静好);
    printf("\033[1;31mhello world\n\033[m");
    return 0;
}

#else

enum COLOR_CODE {
    RED = 31,
    GREEN,
    YELLOW = 34,
    BLUE,
    MAO
};

#define COLOR_SET "\033[1;%dm"
#define COLOR_END "\033[0m"

int main() {
    printf(COLOR_SET "黄静好和猫\n" COLOR_END, RED);
    printf(COLOR_SET "黄静好和猫\n" COLOR_END, GREEN);
    printf(COLOR_SET "黄静好和猫\n" COLOR_END, YELLOW);
    printf(COLOR_SET "黄静好和猫\n" COLOR_END, BLUE);
    printf(COLOR_SET "黄静好和猫\n" COLOR_END, MAO);
    printf(
        COLOR_SET "黄"
        COLOR_SET "静"
        COLOR_SET "好"
        COLOR_SET "和"
        COLOR_SET "猫\n"
        COLOR_END,
        RED, GREEN, YELLOW, BLUE, MAO
    );
    return 0;
}

#endif
