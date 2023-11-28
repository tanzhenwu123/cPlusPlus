//
// Created by Lenovo on 2023/11/28.
//

#include "iostream"

// c++中的静态关键字 会令声明的变量仅在该翻译单元中生效
// 为了防止c++连接器造成的变量重名错误
// 应在单个cpp文件中 决定变量是可以经过全局的 或者是仅在此cpp文件中相关的
struct Entity {
    static int x,y;
    static void Print() {
        std::cout<<x<<", "<<y<<std::endl;
    }
};

int Entity:: x;
int Entity:: y;

// 同样的 类或是构造体中 静态属性存在于类中 类中的静态属性发生了变化 那么此类所有的实例都将得到改变过后的属性
void logEntity() {
//    Entity:: x = 1;
//    Entity:: y = 1;
//    Entity:: x = 2;
//    Entity:: y = 2;
    Entity e;
    e.x = 1;
    e.y = 1;
    Entity e1;
    e1.x = 2;
    e1.y = 2;
//    Entity:: Print();
//    Entity:: Print();
    e.Print();
    e1.Print();
}