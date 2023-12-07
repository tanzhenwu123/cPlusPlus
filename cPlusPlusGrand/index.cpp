//
// Created by Lenovo on 2023/12/7.
//

// c++的宏可以在编译期间提供更换文本的功能
#include "iostream"

#define Grand = 1

#ifdef Grand == 1
#define LOG(X) std::cout<< X << std::endl
#else
#define LOG(X)
#endif

void initGrand() {
    LOG("Hello World !");
}
