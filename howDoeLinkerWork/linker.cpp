//
// Created by Lenovo on 2023/11/20.
//
#include <iostream>

// c++的连接器视每个cpp文件为一个翻译单元，当你在cpp文件中声明一个函数时
// 假如没有强调声明这个函数是静态的话
// 那么连接器会告诉你为什么不使用这个函数，你是否需要在项目中使用他
// 决定这个函数是否在项目中还是本文件中 使用static
static int Log(const char* message) {
    using namespace std;
    cout << message << endl;
}
