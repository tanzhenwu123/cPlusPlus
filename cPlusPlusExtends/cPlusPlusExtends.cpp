//
// Created by Lenovo on 2023/11/30.
//

#include "iostream"

class Phone {
public:
    int width,height;
    void callTel() {
        std::cout<<"call tel number"<<std::endl;
    }
};

class miPhone : public Phone {
public:
    miPhone(int pWidth = 20,int pHeight = 100) {
        width = pWidth;
        height = pHeight;
    }
    void printHello() {
        std::cout<<"are you ok?"<<std::endl;
    }
    void printInfo() {
        std::cout<<"parameter: "<<"size "<<width<<", "<<height<<std::endl;
    }
};

void initPhone() {
    miPhone mi6;
    mi6.printHello();
    mi6.printInfo();
    mi6.callTel();
}
