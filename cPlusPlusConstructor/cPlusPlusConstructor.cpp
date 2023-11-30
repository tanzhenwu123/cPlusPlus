//
// Created by Lenovo on 2023/11/28.
//

#include "iostream"

class Example {
private:
    int a,b;
public:
    Example(int propA = 0, int propB = 0) {
        std::cout<<"create Example"<<std::endl;
        a = propA;
        b = propB;
    }
    // 当类的作用域结束时(也就是销毁时被调用) 那么析构函数执行
    ~Example() {
        std::cout<<"delete Example"<<std::endl;
    }
//    Example() = delete;
    void Print() {
        std::cout<<a<<", "<<b<<std::endl;
    }
};

void initExample() {
    Example exA(2,3);
    Example exB;
    exA.Print();
    exB.Print();
}