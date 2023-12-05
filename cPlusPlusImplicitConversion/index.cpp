//
// Created by Lenovo on 2023/12/1.
//

// c++允许编译器对代码执行一次隐式转换

#include "string"
#include "iostream"

using String = std::string;

class Imp {
private:
    String m_Name;
    int Age;
public:
    // explicit关键字禁止隐式转换
    explicit Imp(const String& name) : m_Name(name), Age(-1) {};
    explicit Imp(int age) :m_Name("Unkonw"), Age(age) {}
};

void PrintImp(const Imp& imp) {

}

void initImp() {
//    PrintImp(22);
//    PrintImp("zhenwu");
//    Imp imp1 = String("zhenwu");
//    Imp imp2 = 22;
Imp imp1("zhenwu");
Imp imp2(23);
}
