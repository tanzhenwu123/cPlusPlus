//
// Created by Lenovo on 2023/11/28.
//

#include "iostream"

int ControlLog() {
    for(int i = 0 ; i < 10; i ++) {
        if(i % 2 == 0)
            // 这里如果为真的话继续执行下列代码
            continue;
        std::cout<<"Hello World"<<std::endl;
        if(i == 3) {
            // 条件为真的话返回结果 结束此函数的运行
            return 3;
        }
    }
}