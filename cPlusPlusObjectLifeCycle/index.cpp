//
// Created by Lenovo on 2023/12/5.
//

#include "iostream"

class Point{
public:
    Point() {
        std::cout << "create Entity" << std::endl;
    }
    ~Point() {
        std::cout << "destroyed Entity" << std::endl;
    }
};

class ScopedPtr {
private:
    Point* m_ptr;
public:
    ScopedPtr(Point* ptr): m_ptr(ptr) {}
    ~ScopedPtr() {
        delete m_ptr;
    }
};


void initCycle() {
    ScopedPtr scopedPtr = new Point();
}