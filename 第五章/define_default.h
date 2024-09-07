/*************************************************************************
	> File Name: define_default.h
	> Author:wanminglei 
	> Mail:wanminglei@hotmail.com 
	> Created Time: Sat 07 Sep 2024 02:57:15 PM CST
 ************************************************************************/

#ifndef _DEFINE_DEFAULT_H
#define _DEFINE_DEFAULT_H
#define D_VAL(a, val) (#a[0] ? a : val)
#define test_func(a, b, c) __test_func(D_VAL(a, 97), D_VAL(b, 111), D_VAL(c, 12.3))
#endif
