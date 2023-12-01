//
// Created by Lenovo on 2023/11/30.
//

#include "iostream"
#include "string"
#include "stdlib.h"

char* str = "process";

char strArr[8] = {'p','r','o','c','e','s','s',0};

// 实际上是引用一个字符串常量 而非重新复制一个字符串
void printStr(const std::string& string) {
    std:: cout << string << std:: endl;
}

void printStr() {
    printStr("Hello World!");
    bool strCompare = str == strArr;
    char* str2 = "pro\0cess";
    // char* a = 'process
    // a[2] = "a"; 通过该指针修改字面量 由于这是属于未定义行为 修改是行不通的 在编译期间会报错
    char a[] = "process";
    // 宽字符
    const wchar_t* b = L"next";
    const char* c = u8"zhenwu";
    const char* R = R"(line 1
line 2
line 3)";
    using namespace std::string_literals;
    std::string name1 = "tanzhenwu"s + " hello";
    a[2] = 'a';
    std::cout << R << std::endl;
    std::cout << name1 << std::endl;
    std::cout << c << std::endl;
    std::cout << b << std::endl;
    std::cout << a << std::endl;
    std::cout << str2 << std::endl;
    std::cout << strCompare << std::endl;
    std::string name = std::string("hello") + "tzw";
    std::cout<< strArr << " ~ " << name << " ~ " << name.size() << " ~ " << name.find("lo") << std::endl;
}