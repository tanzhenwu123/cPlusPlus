//
// Created by Lenovo on 2023/12/5.
//

#include "iostream"

class _Entity {
public:
    int x,y;
};

void PrintEntity(const _Entity& e) {
    std:: cout << e.x << ", " << e.y << std::endl;
}

class _ChildClass : public _Entity {
public:
    _ChildClass(int childX = 20, int childY = 20) {
        x = childX;
        y = childY;
        PrintEntity(*this);
    }
};

void initThis() {
    _ChildClass c1(10,20);
}

