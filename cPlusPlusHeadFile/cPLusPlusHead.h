//
// Created by Lenovo on 2023/11/21.
//

// 此文件内容仅包含一次 不会被多个obj文件复制
#pragma once

// 头文件不只是声明一些需要的声明
// 通常用于声明某些函数 数据类型 以方便在程序中的使用

void logMessage();

struct player {};

// 预处理语句 如果未定义 _HEAD_H
// 这种处理就好比单例模式
//#ifndef _HEAD_H
// 预处理语句 定义 _HEAD_H
//#define _HEAD_H
//void logMessage();
//struct player {};
// 如果定义了 那就什么都不做
//#endif