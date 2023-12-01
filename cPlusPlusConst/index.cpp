//
// Created by Lenovo on 2023/12/1.
//

#include "iostream"

class MyConst {
private:
    // 不能修改的指针以及无法修改的内容 仅仅只读
    // const int* const a,b;
    int a,b;
    // 类的成员属性默认为不可更改 如果声明成员属性可以更改的话
    mutable int c;
public:
    // 此函数 无法进行写的操作 无法改变类本身
    int GET() const {
        // 如果声明可修改的话 等于是mutable翻转了const的含义
        c = 3;
        return c;
    }
    // 可改变类自身的成员属性
    int GET() {
        a = 1;
        return a;
    }
    MyConst(int PropA = 0) {
        c = PropA;
    }
};

// 参数声明是常量 无需反复复制
void printConst(const MyConst& myconst) {
    std::cout << myconst.GET() << std::endl;
}

void printConst2(MyConst myConst) {
    std:: cout << myConst.GET() << std::endl;
}

void initConst() {
    const int MAX_AGE = 90;
    // MAX_AGE = 2;
    const MyConst myCosnt;
    printConst(myCosnt);
    printConst2(myCosnt);
    int* a = new int;
    // 不能改变指针指向内存里的内容 指针位置可变
     const int* c = new int;
    // 可以改变指针指向内存里的内容 这里只是约定指针不变 内容可变
    int* const b = new int;
    int d = 8;
    // lambda
    // 一次性的小函数 =按值传递 原则上无法修改传递过来的值 编译器不确定这个值是否可以改变
    // 声明mutable 等于告知了编译器 小函数内部是可以修改引入的数据的
    auto f = [=]() mutable {
        // 但是可以走歪路 例如=a的话
        // int cc = a;
        // cc++
        d++;
        std::cout<< d << std::endl;
    };
    f();
    *b = MAX_AGE;
    c = &MAX_AGE;
    *a = 2;
    std:: cout << *a << std::endl;
    std:: cout << *b << std::endl;
    std:: cout << *c << std::endl;
}
