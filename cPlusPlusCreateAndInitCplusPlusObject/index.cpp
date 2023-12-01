//
// Created by Lenovo on 2023/12/1.
//

#include "string"
#include "iostream"

using String = std::string;

class CreateAndInit {
private:
    String m_Name;
public:
    CreateAndInit() : m_Name("unKnow") {}
    CreateAndInit(String PropA) : m_Name(PropA) {}

    const String& GetName() {
        return m_Name;
    }
};

void initCreateAndInit() {
    // 创建上级作用域的一个指针
    CreateAndInit* ci1;
    {
        // 栈的内存因平台而异 通常只有1-2m大小 假如要创建大量的同一个类的话
        // 希望借助内存更大的堆去实现这个目的
        CreateAndInit ci2("tanzhenwu");
        CreateAndInit* ci3 = new CreateAndInit("process");
        // 当我引用堆对象时 由于生命周期的原因 当我没有主动的分配堆对象的内存的话 那么这个对象会继续存在
        ci1 = ci3;
        std::cout << ci1 -> GetName() << std::endl;
        // 没有特殊的情况下 推荐用栈创建对象
    }
    delete ci1;
}