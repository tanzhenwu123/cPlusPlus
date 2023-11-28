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

void superAdd() {
    // static修饰会延长变量的生命周期 程序不结束 那么这个变量在内存中也不会销毁
    // 那么实际上每次执行这几段代码 不会重新创建变量并且定义值 而是继当前的变量的基础上再次赋值
    static int i = 0;
    i++;
    std::cout<<i<<std::endl;
}

class singleInstance {
public:
    static singleInstance& Get() {
        // 这里的意思是 当声明了一个静态实例
        // 那么无论调用这个Get方法多少次 只会取第一次创建的实例(因为这个实例的生命周期没有销毁)
        static singleInstance singleExample;
        // 所以利用static可以实现某个单例的效果
        return singleExample;
    };
    // 那么局部静态和局部变量的差别就很明显了
    void Print() {
        std::cout<<"Hello"<<std::endl;
    }
};

void initSingleExample() {
    singleInstance::Get().Print();
}