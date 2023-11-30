//
// Created by Lenovo on 2023/11/30.
//

#include "iostream"
#include "string"

class PrintTable {
public:
    virtual std::string GetClassName() = 0;
};

// 虚函数引入了动态联编 通常通过v表(虚函数表) 来实现编译
// 虚函数的作用 是希望当子类覆写基类的方法时 该覆写方法能够指向覆写类
class Model : public PrintTable{
public:
    // 定义一个返回字符串对象的虚函数
    // virtual std::string GetName() {
    //    return "Model";
    // }
    virtual std::string GetName() = 0;
};

// 继承基类
class SinglePlayer : public Model{
private:
    std::string playerName;
public:
    // 构造函数中 当我初始化这个类时 希望提供一个字符串初始化指定成员属性
    SinglePlayer(const std::string& name): playerName(name) {}
    std::string GetName() {
        return playerName;
    }
    std::string GetClassName() override {
        return "SinglePlayer";
    }
};
// 定义一个函数 希望在控制台中打印我的playerName成员变量
void printName(Model* model) {
    std::cout<<model->GetName() << std::endl;
}

void PrintClassName(PrintTable* printTable) {
    std::cout<<printTable->GetClassName()<<std::endl;
}

void initModel() {
    // 创建一个 Model 实例
    // Model* model = new Model(); // 这里当使用纯虚函数时 Model基类已不再具有实例化的能力 如需声明model 请提供Model的子类
    // printName(model);
    // 创建一个 singlePlayer 实例
    SinglePlayer* singlePlayer = new SinglePlayer("tzw");
     printName(singlePlayer);
    PrintClassName(singlePlayer);
}

// 和虚函数相关的内存开销 额外的内存储存v表 基类中需要一个成员指针指向v表
// 每次调用虚函数时 需要遍历虚函数表 以确定要映射到哪个函数