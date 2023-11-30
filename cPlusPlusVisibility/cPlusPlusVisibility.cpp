//
// Created by Lenovo on 2023/11/30.
//

class ViewClass {
// 如果声明private 那么声明的成员属性 仅此类可见 其中不包括子类 友元可访问
private:
    int x,y;
// 外部可见 声明的成员属性 完全公开
public:
    ViewClass(int PropA = 0, int PropB = 0) {
        x = PropA;
        y = PropB;
    }
// 仅成员可见
protected:
    int a,b;
};

class ChildViewClass : public ViewClass{
    ChildViewClass(int PropA, int PropB) {
        a = PropA;
        b = PropB;
    }
};

void initViewClass() {
    ViewClass viewClass;
};
