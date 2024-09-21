/*************************************************************************
	> File Name: 9.my_printf.c
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 21 Sep 2024 11:18:54 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdarg.h>
#include<stdint.h>

//#define TEST(format, ...) printf(format, __VA_ARGS__) 效果同下；
//##args是确保在没有变参列表时吃掉','输出准确；
//args...是命名变参列表；
#define TEST(format, args...) {\
        int n1, n2; \
        n1 = printf(format, ##args); \
        n2 = my_printf(format, ##args); \
        printf("n1 = %d, n2 = %d\n", n1, n2); \
        }

char base_16_code(int8_t x) {
    if (x < 10) return x + '0';
    else return x - 10 + 'a';
}

int my_printf(const char *format, ...) {
    #define CPUT(c) putchar(c), count += 1
    va_list args;
    va_start(args, format);
    int count = 0;
    for (int i = 0; format[i]; i++) {
        switch (format[i]) {
            case '%': {
                switch (format[i + 1]) {
                    case '%': {
                        CPUT('%');
                        i += 1;
                    } break;
                    case 's': {
                        const char *s = va_arg(args, const char *);
                        for (int j = 0; s[j]; j++) CPUT(s[j]);
                        i += 1;
                    } break;
                    case 'd': {
                        int num = va_arg(args, int);//获取对应的整型数据；
                        int8_t arr[20];//相当于char arr[20]；
                        int len = 0, flag = (num < 0);
                        do {
                            arr[len++] = num % 10;
                            num /= 10;
                        } while (num);
                            if (flag) CPUT('-');
                        for (int j = len - 1 ; j >= 0; j--) {
                            if (flag) {
                                CPUT((-arr[j]) + '0');
                            }
                            else CPUT(arr[j] + '0');
                        }
                        i += 1;
                    } break;
                    case 'x': {
                        unsigned int num = va_arg(args, unsigned int);
                        int8_t arr[20]; int len = 0;
                        do {
                            arr[len++] = num % 16;
                            num /= 16;
                        } while (num);
                        for (int j = len - 1; j >= 0; j--) {
                            CPUT(base_16_code(arr[j]));
                        } 
                        i += 1;
                    } break;
                }
            } break;
            default : CPUT(format[i]); break;
        }
        //count += 1;
    }
    #undef CPUT
    return count;
}

int main() {
    int n1 = 0, n2 = 1;
    //当宏定义内也定义了相同变量，如果在{}内部，因为是不同的作用域所以不会冲突，反之会冲突；
    TEST("hello world\n");
    TEST("100%%\n");
    TEST("%s%s\n", "hello", "world");
    TEST("INT32_MAX = %d, INT32_MIN = %d\n", INT32_MAX, INT32_MIN);
    TEST("123 = %x, -1 = %x, INT32_MIN = %x\n", 123, -1, INT32_MIN);
    return 0;
}
