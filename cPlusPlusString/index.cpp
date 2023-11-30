//
// Created by Lenovo on 2023/11/30.
//

#include "iostream"
#include "string"

char* str = "process";

char strArr[8] = {'p','r','o','c','e','s','s',0};

// 实际上是引用一个字符串常量 而非重新复制一个字符串
void printStr(const std::string& string) {
    std:: cout << string << std:: endl;
}

void printStr() {
    printStr("Hello World!");
    std::string name = std::string("hello") + "tzw";
    std::cout<< strArr << " ~ " << name << " ~ " << name.size() << " ~ " << name.find("lo") << std::endl;
}