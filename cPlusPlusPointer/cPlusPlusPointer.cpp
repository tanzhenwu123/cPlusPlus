//
// Created by Lenovo on 2023/11/28.
//

//指针只是一个地址 他只是一个保存内存地址的整数
//与类型无关

#include "iostream"
#include "string.h"

int howPoint() {
    // 假如声明一个无类型指针
    // 0不是一个有效的指针地址 任何指针不会一直到0
    int num = 8;
    // 需获取指针的时候 在变量名前添加&标记
    // 指针本身也是变量 这些变量也储存在内存中 这就是可以的到双指针三指针的原因 利用指针指向指针
    int*pointA = &num;
    // 当*调用指针的时候 实际上实在逆向引用该指针 这里可以通过调用指针将内存中该地址的数据重新赋值
    *pointA = 100;
    // 如果是指针指向一个内存块呢 实际上这种说法不严谨 你无法明确知道这个内存块的大小
    using namespace std;
    // 以下操作 定义一个指针 并告知该指针的内存大小 - 8字节
    char*buffer = new char[8];
    // 通过调用memset函数 传递指针 赋值 赋值大小
    memset(buffer,0,8);
    // 将内存中指针地址的数据删除
    delete[] buffer;
    cout<<num<<endl;
}
