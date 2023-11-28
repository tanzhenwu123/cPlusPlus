//
// Created by Lenovo on 2023/11/28.
//

#include "iostream"

void Increment(int& Pointer) {
    Pointer++;
}

int Quote() {
    // 引用本身并不是创建新的变量 而是通过已存在的变量映射 所以引用并不占内存
    // 别名 - 引用
    int a = 10;
    // 实际上 int b = &a; b+1 = int* b = &a -> (*b)+1;
    // 引用只是逆向指针的一个语法糖 它可以让你的代码看上去更加的简单
    // 而当引用一个数据时 应该确定该引用不能二次赋值
    // 假设 int a = 1; int b = 2;
    // 当 int c = &a; c引用a的时候
    // 如果再次赋值 c = b; 那么最终造成的结果就是 a = 2; a == b;
    // 引用实际上只会出现在编译代码中 无论是引用还是指向变量 最终只会得到一个变量
    // 这里最后也是a=a++ 引用通过指针找到了内存中的数据 引用的实际操作最终影响该指针上的数据
    Increment(a);
    using namespace std;
    cout<<a<<endl;
}