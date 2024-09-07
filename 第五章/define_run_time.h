/*************************************************************************
	> File Name: define_run_time.h
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 07 Sep 2024 02:00:02 PM CST
 ************************************************************************/

#ifndef _DEFINE_RUN_TIME_H
#define _DEFINE_RUN_TIME_H
#define TIME(func) { \
    long long b = clock(); \
    func; \
    long long e = clock(); \
    printf("%s run %lldms\n", #func, 1000 * (e - b) / CLOCKS_PER_SEC); \
}
#endif
