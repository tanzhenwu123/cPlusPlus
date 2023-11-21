//
// Created by Lenovo on 2023/11/21.
//

#include <iostream>

// int的字节被限定在4kb以内 以有符号数为例 int的最小可以是-21亿也可以是+21亿
void VariableDemo() {
    // 如果是无符号数的话 代表变量可声明的最小数为整数 那么int可声明的范围就到了42亿
    // char 1字节
    // short 2字节
    // int 4字节
    // long 4字节
    // float 4字节
    // long long 8字节
    // boolean 0 || 1
    // 如果给int类型赋值字符串 会将字符转转化成相对应的数字 char同理
    float variable = 4 * 13;
    variable = 5 * 5.5;
    double num = 5.5;
    bool isTrue = true;
    using namespace std;
    cout << sizeof isTrue  << endl;
    cout << sizeof num << endl;
    variable = 22 * 2;
    cout << variable << endl;
}