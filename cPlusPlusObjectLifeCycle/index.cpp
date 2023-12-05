//
// Created by Lenovo on 2023/12/5.
//

#include "iostream"
#include "memory"

class Point{
public:
    Point() {
        std::cout << "create Entity" << std::endl;
    }
    ~Point() {
        std::cout << "destroyed Entity" << std::endl;
    }
};

//class ScopedPtr {
//private:
//    Point* m_ptr;
//public:
//    ScopedPtr(Point* ptr): m_ptr(ptr) {}
//    ~ScopedPtr() {
//        delete m_ptr;
//    }
//};


void initCycle() {
    // 引用计数 当所有的Point实例释放后 释放此计数指针的内存空间
    std::shared_ptr<Point> sharedPtr;
    // 弱指针 引用不计数 所以随着复制的作用域销毁 弱指针所复制的内容也会被释放
    std::weak_ptr<Point> weakPtr;
    {// ScopedPtr scopedPtr = new Point();
        // std::unique_ptr<Point> scopedPtr(new Point());
        // 智能指针 作用域指针 仅在申明的作用域内有效
        // std::unique_ptr<Point> scopedPtr = std::make_unique<Point>();
        std::shared_ptr<Point> scopedPtr = std::make_unique<Point>();
        // 最后一个scopedPtr引用被释放后释放
        sharedPtr = scopedPtr;
        // 作用域结束得到释放
        weakPtr = scopedPtr;
    }
}