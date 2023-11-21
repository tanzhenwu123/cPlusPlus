//
// Created by Lenovo on 2023/11/21.
//

#include <iostream>

int Multiply(int a, int b);

// 每次调用函数时 用*号表示强调 编译器会生成一个call指令
// 这基本上意味着， 在一个运行的程序中
// 调用函数会形成一个新的堆栈结构
// 再往后将返回地址压入堆栈
// 过分的调用函数会导致编译器的性能缓慢
// 为了将push进堆栈的结果返回 编译器需要回到最初调用函数之前
// 这样就形成了一个来回跳跃的场景
// 所以 在日常开发中
// 需要明白函数应该在哪得到正确的调用
void logMessage() {
    int result  = Multiply(33, 33);
    using namespace std;
    cout << "output message: "  << result << endl;
}