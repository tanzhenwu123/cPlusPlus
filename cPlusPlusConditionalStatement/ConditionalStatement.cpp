//
// Created by Lenovo on 2023/11/21.
//

#include <iostream>

void Conditional(int num) {
    // c++ 标准库中 == 为一个函数，左右两个数据作为参数 ==会对比两个参数的内存地址以确保他们是相同的
    // 并返回true或者false
    // 数学编程 和 逻辑编程
    bool comparisonResult = num % 2 == 0;
    // 不要过度依赖if 部分情况下 仅凭运算能解决的代码可以直接跳过if
    // 否则编译器的一些魔法会导致你在出现问题的时候摸不着头脑
    if(comparisonResult)
        std:: cout << "integer" << std::endl;
    else
        std:: cout << "oddNumber" << std::endl;
    // else if 不是c++的关键字 视作为 else里套了一个if
}
