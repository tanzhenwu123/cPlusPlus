//
// Created by Lenovo on 2023/12/1.
//

#include "string"
#include "iostream"

using String = std::string;

class NewKeyWord {
private:
    String m_Name;
public:
    NewKeyWord(String PropA) : m_Name(PropA) {}
    const String GETNAME() const {
        return m_Name;
    }
};

void initNewKeyWord() {
    // new的主要目的是在堆上分配内存 而用new创建的对象需要手动分配内存的去向
    int a = 1;
    int* b = new int;
    *b = 2;
    NewKeyWord* c = new NewKeyWord("need");
    // 调用new会导致调用隐藏在里面的c函数malloc
    // 该函数主要目的在于分配内存
    // 该函数有一个参数为size 也就是需要多少字节的内存空间 并返回一个void指针
    std::cout << c -> GETNAME() << std::endl;
    // delete等价于c的free 意在释放malloc使用的内存
    // 后续会有很多c++针对堆对象的优化策略 例如基于作用域的指针，引用计数
    delete b;
    delete c;
}
